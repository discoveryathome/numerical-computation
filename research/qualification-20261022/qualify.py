"""Frozen qualification experiment. Never rewrites the initial trial package."""
from pathlib import Path
from fractions import Fraction
import argparse
import ctypes as C
import hashlib
import json
import math
import os
import platform
import random
import statistics
import subprocess
import sys
import time

import mpmath
import numpy as np
import scipy
from scipy import special
from scipy.integrate import solve_ivp

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]
sys.path.insert(0, str(ROOT / "src"))
from trial import mpref, decref
from bounds import make_certificate, coefficient

SEED = 2026102231
MODES = {"stable": 0, "inherited": 1, "piecewise": 2, "direct_expm1": 3, "naive": 4}
LIB = None


def load():
    global LIB
    LIB = C.CDLL(str(ROOT / "build/qualified.dylib"))
    LIB.qualified.argtypes = [C.c_void_p, C.c_size_t, C.c_int, C.c_int, C.c_int, C.c_void_p]
    LIB.qualified.restype = C.c_double
    assert LIB.qualified_environment() == 1


def native(x, k, name, reps=1, out=None):
    x = np.ascontiguousarray(x, dtype=np.float64)
    if out is None:
        out = np.empty_like(x)
    LIB.qualified(x.ctypes.data, len(x), k, MODES[name], reps, out.ctypes.data)
    return out


def phi(x, k, name):
    if name == "scipy":
        return special.exprel(x) if k == 1 else special.hyp1f1(1, k+1, x)/math.factorial(k)
    return native(x, k, name)


def digest(x):
    return hashlib.sha256(np.asarray(x, dtype="<f8").tobytes()).hexdigest()


def metrics(y, ref, x):
    valid = np.isfinite(y) & (y > 0)
    distance = np.zeros(len(y), dtype=np.int64)
    distance[valid] = np.abs(y[valid].view(np.int64)-ref[valid].view(np.int64))
    worst = int(np.argmax(distance))
    return {"invalid_count": int(np.sum(~valid)), "max_ulp_finite_positive": int(max(distance)),
            "over_16_ulp": int(np.sum(distance > 16) + np.sum(~valid)),
            "worst_valid_input_hex": float(x[worst]).hex(),
            "worst_valid_output_hex": float(y[worst]).hex(), "reference_hex": float(ref[worst]).hex()}


def panel():
    rng = random.Random(SEED)
    x = [0., -0., -4., 4.]
    x += [rng.uniform(-4, 4) for _ in range(4096)]
    x += [rng.choice((-1., 1.))*2.**rng.uniform(-1074, 2) for _ in range(2048)]
    x += [s*math.ldexp(float(i), -1074) for i in range(1, 65) for s in (-1, 1)]
    branches = {i/2+.25 for i in range(-8, 8)}
    branches |= {s*t for s in (-1, 1) for t in (.015625, .0625, .25, .5, 1., 2.)}
    for b in sorted(branches):
        x.append(b)
        for direction in (-math.inf, math.inf):
            v = b
            for _ in range(128):
                v = math.nextafter(v, direction)
                x.append(v)
    return np.array(x, dtype=np.float64)


def accuracy(outdir):
    x = panel()
    np.save(outdir / "inputs.npy", x, allow_pickle=False)
    cert, _ = make_certificate()
    rows, disagreements, exact_checks = [], [], 0
    refs = []
    for k in (1, 2, 3):
        ref = np.array([mpref(z, k) for z in x])
        decimal_ref = np.array([decref(z, k) for z in x])
        disagreements += [[k, float(x[i]).hex()] for i in np.flatnonzero(ref != decimal_ref)]
        # Exact-rational series enclosure at a fixed spread of exposed points.
        for i in np.linspace(0, len(x)-1, 64, dtype=int):
            lo, hi = coefficient(Fraction(float(x[i])), 0, k)
            assert float(lo) == float(hi) == float(ref[i]), (k, i)
            exact_checks += 1
        refs.append(ref)
        for name in (*MODES, "scipy"):
            row = {"order": k, "method": name, **metrics(phi(x, k, name), ref, x)}
            rows.append(row)
            if name == "piecewise":
                assert row["invalid_count"] == 0
                assert row["max_ulp_finite_positive"] <= cert["max_integer_ulp_bound"]
        print(f"accuracy order {k} complete", flush=True)
    np.save(outdir / "references.npy", refs, allow_pickle=False)
    assert not disagreements
    assert any(r["over_16_ulp"] > 0 for r in rows if r["method"] == "naive")
    return {"seed": SEED, "points_per_order": len(x), "input_sha256_le_f64": digest(x),
            "reference_values": 3*len(x), "oracle_disagreements": disagreements,
            "exact_rational_reference_checks": exact_checks, "rows": rows}


def measured_samples(functions, rounds, rng, repeats=1):
    samples = {name: [] for name in functions}
    for f in functions.values():
        f()
    for _ in range(rounds):
        order = list(functions)
        rng.shuffle(order)
        for name in order:
            t = time.perf_counter_ns()
            for _ in range(repeats):
                functions[name]()
            samples[name].append((time.perf_counter_ns()-t)/repeats)
    return {name: {"median_ns": statistics.median(v), "samples_ns": v} for name, v in samples.items()}


def kernel_timings():
    rng = random.Random(SEED+1)
    panels = {"uniform": np.array([rng.uniform(-4, 4) for _ in range(8192)]),
              "near_zero": np.array([rng.choice((-1., 1.))*2.**rng.uniform(-100, -2) for _ in range(8192)]),
              "solver_spectrum": np.tile((1-.05*np.fft.fftfreq(128, 1/128)**2)/128, 64)}
    result = []
    for pname, x in panels.items():
        for k in (1, 2, 3):
            names = ["stable", "stable_AA", "inherited", "piecewise"]
            if k == 1:
                names.append("direct_expm1")
            output = np.empty_like(x)
            fs = {name: (lambda name=name: native(x, k, name.replace("_AA", ""), 64, output)) for name in names}
            scalar = measured_samples(fs, 11, rng)
            for value in scalar.values():
                value["median_ns_per_value"] = value["median_ns"]/(len(x)*64)
            # Array-call timings include each method's actual Python dispatch and allocation.
            # Native methods also include the common checksum loop; these are not scalar-ABI claims.
            arrays = measured_samples({name: (lambda name=name: phi(x, k, name.replace("_AA", "")))
                                       for name in [*names, "scipy"]}, 11, rng, repeats=64)
            for value in arrays.values():
                value["median_ns_per_value"] = value["median_ns"]/len(x)
            result.append({"panel": pname, "order": k, "size": len(x), "input_sha256": digest(x),
                           "native_loop": scalar, "array_call": arrays})
        print(f"timing {pname} complete", flush=True)
    return result


def coefficients(z, h, method):
    if np.max(np.abs(z)) > 4:
        raise ValueError("outside qualified scalar domain")
    E, E2 = np.exp(z), np.exp(z/2)
    if method == "contour":
        # Standard ETDRK4 coefficient contour evaluation, 32 midpoint nodes.
        nodes = np.exp(1j*np.pi*(np.arange(32)+.5)/32)
        w = z[:, None]+nodes[None, :]
        ew = np.exp(w)
        q = h*np.mean(np.expm1(w/2)/w, axis=1).real
        f1 = h*np.mean((-4-w+ew*(4-3*w+w*w))/(w*w*w), axis=1).real
        f2 = h*np.mean((2+w+ew*(-2+w))/(w*w*w), axis=1).real
        f3 = h*np.mean((-4-3*w-w*w+ew*(4-w))/(w*w*w), axis=1).real
    else:
        p1, p2, p3 = [phi(z, k, method) for k in (1, 2, 3)]
        q = h/2*phi(z/2, 1, method)
        f1, f2, f3 = h*(p1-3*p2+4*p3), h*(p2-2*p3), h*(-p2+4*p3)
    return E, E2, q, f1, f2, f3


def initial(n):
    x = 2*np.pi*np.arange(n)/n
    return .3*np.cos(x)+.2*np.sin(2*x)


def spectrum(n):
    return 1-.05*np.fft.fftfreq(n, 1/n)**2


def integrate(n, steps, method):
    v, L = np.fft.fft(initial(n)), spectrum(n)
    previous_h, builds = None, 0
    def nonlinear(v):
        return -np.fft.fft(np.fft.ifft(v).real**3)
    for h in steps:
        if h != previous_h:
            E, E2, q, f1, f2, f3 = coefficients(h*L, h, method)
            previous_h, builds = h, builds+1
        nv = nonlinear(v)
        a = E2*v+q*nv
        na = nonlinear(a)
        b = E2*v+q*na
        nb = nonlinear(b)
        c = E2*a+q*(2*nb-nv)
        nc = nonlinear(c)
        v = E*v+f1*nv+2*f2*(na+nb)+f3*nc
    return np.fft.ifft(v).real, builds


def schedule(count, varying=False):
    if not varying:
        return np.full(count, 1/count)
    weights = 1+.3*np.sin(np.arange(count)*math.sqrt(2))
    return weights/np.sum(weights)


def applications():
    rows = []
    rng = random.Random(SEED+2)
    for n in (64, 128):
        L = spectrum(n)
        def rhs(t, u):
            return np.fft.ifft(L*np.fft.fft(u)).real-u**3
        coarse = solve_ivp(rhs, (0, 1), initial(n), method="DOP853", rtol=1e-12, atol=1e-14)
        fine = solve_ivp(rhs, (0, 1), initial(n), method="DOP853", rtol=2.5e-14, atol=2.5e-16)
        assert coarse.success and fine.success
        reference_delta = float(np.max(np.abs(coarse.y[:, -1]-fine.y[:, -1])))
        assert reference_delta < 1e-10
        for count, varying in ((64, False), (128, False), (256, False), (128, True)):
            hs = schedule(count, varying)
            names = ["stable", "stable_AA", "inherited", "piecewise", "scipy", "contour"]
            results = {name: integrate(n, hs, name.replace("_AA", "")) for name in names}
            errors = {name: float(np.max(np.abs(v[0]-fine.y[:, -1]))) for name, v in results.items()}
            coefficient_delta = max(float(np.max(np.abs(a-b))) for a, b in
                                    zip(coefficients(hs[0]*L, hs[0], "piecewise"),
                                        coefficients(hs[0]*L, hs[0], "contour")))
            assert max(errors.values()) < 1e-7, errors
            assert coefficient_delta < 1e-12
            timings = measured_samples({name: (lambda name=name: integrate(n, hs, name.replace("_AA", "")))
                                        for name in names}, 11, rng)
            # Separate coefficient creation timing: never multiply this into a fictitious solver gain.
            ct = measured_samples({name: (lambda name=name: coefficients(hs[0]*L, hs[0], name))
                                   for name in names if name != "stable_AA"}, 11, rng, repeats=16)
            rows.append({"n": n, "steps": count, "varying": varying,
                         "step_sha256": digest(hs), "initial_sha256": digest(initial(n)),
                         "max_abs_scalar_input": float(max(abs(hs[:, None]*L).ravel())),
                         "coefficient_builds": results["piecewise"][1],
                         "coefficient_cache_bytes": 6*n*8,
                         "reference_method": "SciPy DOP853 on same Fourier-collocation ODE",
                         "reference_tolerance_refinement_delta": reference_delta,
                         "max_final_error": errors,
                         "piecewise_vs_contour_coefficient_max_abs": coefficient_delta,
                         "timings": timings, "coefficient_timings": ct,
                         "final_piecewise_hex": [float(x).hex() for x in results["piecewise"][0]]})
            print(f"application N={n} steps={count} varying={varying} complete", flush=True)
    return rows


def run(outdir):
    # Each run gets a fresh destination. Never silently replace an exposed result.
    outdir.mkdir(parents=True, exist_ok=False)
    started = time.time()
    load()
    source_hashes = {str(p.relative_to(ROOT)): hashlib.sha256(p.read_bytes()).hexdigest()
                     for p in [HERE/"PROTOCOL.md", HERE/"bounds.py", HERE/"qualified.c",
                               HERE/"certificate.json", Path(__file__), ROOT/"src/kernels.c", ROOT/"src/trial.py"]}
    result = {"kind": "author-run qualification, independent review pending", "seed": SEED,
              "environment": {"platform": platform.platform(), "python": sys.version,
                              "numpy": np.__version__, "scipy": scipy.__version__, "mpmath": mpmath.__version__,
                              "load_start": os.getloadavg(),
                              "compiler": subprocess.check_output(["clang", "--version"], text=True),
                              "flags": "-O3 -std=c11 -fno-fast-math -ffp-contract=off -shared -fPIC"},
              "source_sha256": source_hashes}
    result["accuracy"] = accuracy(outdir)
    (outdir/"accuracy.json").write_text(json.dumps(result, indent=2)+"\n")
    result["kernel_timings"] = kernel_timings()
    result["applications"] = applications()
    result["elapsed_seconds"] = time.time()-started
    result["environment"]["load_end"] = os.getloadavg()
    (outdir/"results.json").write_text(json.dumps(result, indent=2)+"\n")
    print(json.dumps({"complete": True, "elapsed_seconds": result["elapsed_seconds"]}))


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--output", type=Path, required=True)
    run(parser.parse_args().output)
