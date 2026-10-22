# Qualification assessment

## Decision

Keep this project open for a **small, targeted accuracy and numerical-software
research round**. It has a concrete defect to reproduce, a new bounded-error
implementation to audit, and a realistic application harness. It is not yet a
strong candidate for broad donor traffic or a performance flagship. No independent
scientific review, specialized state-of-the-art comparison or production adoption
has occurred. The entire original package remains frozen; QUALIFICATION.md is
the current supplemental entry point.

## Accuracy: a real correction and a useful new artifact

The qualification panel contains 12,958 binary64 inputs per order: uniform
points, logarithmically distributed near-zero values including subnormals, and
dense neighborhoods around inherited branches and the new piecewise boundaries.
All 38,874 mpmath/Decimal references agree; 192 selected references also agree
with exact-rational series enclosures. These are author-run cross-checks.

| Implementation | phi1 max ULP | phi2 max ULP | phi3 max ULP | Whole-domain status |
| --- | ---: | ---: | ---: | --- |
| Frozen stable baseline | 1 | 3 | 7 | Sampled only |
| Inherited tuned candidates | 1 | 6 | **18** | phi3 fails the 16-ULP gate |
| New piecewise degree-14 | 2 | 1 | 1 | Author-derived bound <=4 ULP, review pending |
| SciPy exprel / hyp1f1 | 1 | 6 | 7 | Sampled here; no global bound asserted |

The phi3 counterexample is x=`0x1.030438d414148p-1`. The inherited output is
`0x1.85446912a1b0bp-3`; all reference calculations round to
`0x1.85446912a1af9p-3`. It lies just above the inherited polynomial threshold,
in the cancellation-sensitive expm1 expression. Do not continue promoting that
candidate as satisfying the 16-ULP gate. Preserve the initial successful samples
as historical evidence; they were never a whole-domain guarantee.

The new implementation uses 17 half-integer centers, degree 14 and a 6,120-byte
coefficient table. Those choices were fixed before measuring the new panel.
Coefficients, truncation and rounded Horner errors are bounded with exact rational
arithmetic. There are no runtime exp/expm1 calls in this candidate. Initialization
is a static table; certificate generation and compilation are offline and are not
hidden in per-call timings. The shared native library also contains the old grid
for comparison, so its full binary size is not the candidate's code size.

This is a standard Taylor construction, not new numerical analysis. Its credible
incremental contribution is the explicit error argument, executable certificate,
failure artifact and reviewable implementation. Independent review is still needed
for the argument and its correspondence to compiled arithmetic.

## Performance: scalar tradeoffs, no solver win

All native methods use a common function-pointer loop and checksum. Array-call
timings include actual Python dispatch and allocation; the native routines also
retain their checksum. These two timing categories are kept separate. SciPy
comparisons use its pinned 1.18.0 wheel. The real hyp1f1 routine is a general
hypergeometric implementation backed by Boost; it is an accuracy/control baseline,
not an established fastest specialized phi2/phi3 kernel.

Illustrative medians from the archived run, nanoseconds/value:

| Workload / order | Stable native | Inherited native | New native | New array call | SciPy array call |
| --- | ---: | ---: | ---: | ---: | ---: |
| Uniform / phi1 | 11.41 | 9.76 | 8.29 | 8.67 | 10.57 |
| Uniform / phi2 | 11.75 | 10.37 | 8.31 | 8.22 | 109.85 |
| Uniform / phi3 | 12.38 | 9.86 | 8.23 | 8.17 | 101.90 |
| Near zero / phi1 | 11.08 | 3.42 | 6.46 | 7.59 | 8.88 |
| Solver spectrum / phi1 | 12.32 | 7.10 | 9.22 | 11.96 | **7.02** |

The direct native expm1/x phi1 control takes 9.66 ns on the uniform workload;
thus the original conservative-baseline headline is not the useful competitive
comparison. The new candidate does not dominate near-zero or solver-spectrum
workloads. Inherited phi3 timings remain visible for diagnosis but do not make
it an eligible replacement under the failed accuracy gate.

Application: periodic Fourier-collocation Allen–Cahn, N=64/128, T=1, ETDRK4.
Six fixed-step workloads build their coefficients **once**; two prescribed
varying-step workloads build them 128 times. All methods use the same cache
policy and time-stepping implementation. Coefficient work, FFTs, nonlinearities,
allocations and Python overhead are included in full-solver timing. The varying
schedule is not an adaptive solver, and the collocation test does not certify
continuum PDE error.

| Grid / steps | Schedule | Stable ms | New ms | Stable/new | New paired wins / 11 |
| --- | --- | ---: | ---: | ---: | ---: |
| 64 / 64 | Fixed | 4.653 | 4.681 | 0.994 | 7 |
| 64 / 128 | Fixed | 9.503 | 9.015 | 1.054 | 5 |
| 64 / 256 | Fixed | 18.544 | 18.930 | 0.980 | 6 |
| 128 / 64 | Fixed | 4.588 | 4.629 | 0.991 | 4 |
| 128 / 128 | Fixed | 9.235 | 9.349 | 0.988 | 5 |
| 128 / 256 | Fixed | 18.161 | 18.125 | 1.002 | 7 |
| 64 / 128 | Varying | 14.005 | 13.991 | 1.001 | 4 |
| 128 / 128 | Varying | 20.561 | 19.953 | 1.030 | 7 |

No workload provides a convincing gain under the protocol. At fixed steps, scalar
evaluation is largely amortized away; on varying steps the Python coefficient
assembly costs more than the differences between these native kernels. Contour
coefficients provide an established-method control; beating their repeatedly
rebuilt cost is not evidence of beating the fastest relevant scalar method.
SciPy is also competitive or faster end to end in this harness.

The candidate's final solutions differ from a separate SciPy DOP853 integration
of the same semidiscrete ODE by about 6.6e-10 at 64 fixed steps, 4.1e-11 at 128,
and 2.6e-12 at 256. A separate convergence test checks the fourth-order rate.
The DOP853 reference is checked by tolerance refinement. These are numerical
cross-checks, not exact solver-error certificates or independent human review.

System load was uncontrolled and high: one-minute load averages approximately
42.7 at start and 23.3 at finish. Raw randomized paired samples and A/A timings
are archived. One varying-step A/A median ratio drifts about 5%. No general
hardware speed claim is justified, and more repetitions on this loaded host
would not resolve that limitation.

## Useful next contributions

1. **Audit the bound.** Review BOUND.md against bounds.py and the generated C;
   concentrate on rounding assumptions, tail bounds and binade conversion. A
   scoped review can independently qualify or reject the 4-ULP claim. Check the
   preserved phi3 failure before attempting a replacement.
2. **Fuse coefficient construction.** The current application makes four scalar
   array calls and assembles several arrays in Python. A native, joint ETDRK4
   coefficient implementation is a bounded next experiment. Freeze a new test
   panel first; measure complete integration against equally fused baselines,
   include coefficient accuracy, and preserve any null result. Do not compare
   against needlessly repeated fixed-step initialization.
3. **Bring a real workload and a serious comparator.** A numerical-software
   maintainer should identify where scalar phi/coefficient evaluation is actually
   a bottleneck, its input distribution and error budget, and a specialized
   implementation worth competing against. Wider negative arguments, complex
   spectra and matrix-function actions are separate scope extensions.
4. **Replicate on a quiet second architecture.** Preserve compiler/rounding flags,
   run the corruption/domain tests and distinguish host-libm-dependent inherited
   results from the polynomial's arithmetic argument. The archived 18-ULP witness
   is tied to this recorded host; a different witness value is a reportable porting
   result, not grounds to alter the original artifact.

Local coding, verification, fusion experiments and expert-agent reviews can start
now. Outside help is needed for independent numerical review, workload/baseline
authority and production relevance. Missing outside signoff does not close intake.
No outreach or upstream posting was performed or authorized by this package.

## Provenance and reproduction

Base commit: `8620d5f3fe358dd5592d4c990b8e5485483620c7`. The original manifest,
sources, data and discovery metadata are untouched. The new protocol was hashed
before evaluation; source hashes, seeds, raw inputs, references, compiler flags,
versions, 64.86-second experiment duration and raw timings are in run-01.
`manifest.json` inventories this supplemental package. All work is by the same
assistant; no subagent or outside reviewer supplied independent signoff.

The new Python/C code is covered by the repository MIT license. No external
implementation source or binary is vendored. SciPy is an installed BSD-licensed
dependency with its own bundled-component notices; its wheel supplies those
notices. Existing dependencies retain their notices. The ETDRK4 method is cited
below; the application code is a new implementation, not copied MATLAB code.

Primary sources, consulted 2026-10-22:

- [SciPy exprel documentation](https://docs.scipy.org/doc/scipy/reference/generated/scipy.special.exprel.html): stable relative exponential and array interface.
- [SciPy hyp1f1 documentation](https://docs.scipy.org/doc/scipy/reference/generated/scipy.special.hyp1f1.html): series definition and real-argument Boost implementation. Substituting a=1,b=k+1 gives phi_k(x)=hyp1f1(1,k+1,x)/k!.
- [Kassam and Trefethen, 2005](https://people.maths.ox.ac.uk/trefethen/publication/PDF/2005_111.pdf): ETDRK4 and stable contour coefficient evaluation, DOI 10.1137/S1064827502410633.
- [SciPy solve_ivp documentation](https://docs.scipy.org/doc/scipy/reference/generated/scipy.integrate.solve_ivp.html): DOP853 reference-solver interface and tolerance controls.
