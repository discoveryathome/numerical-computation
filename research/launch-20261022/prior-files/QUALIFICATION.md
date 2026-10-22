# Numerical computation — qualification outcome, 2026-10-22

**Open for bounded pre-release contributions and expert review. Promising as an
accuracy/certification project; no demonstrated end-to-end performance gain.**

This is the current scientific qualification assessment. The distribution-preparation
round updates README, task routing and verification entry points. Prior versions
and their manifest are archived under research/distribution-prep-20261022/.
The initial and qualification experiment sources/results remain unchanged. No hub
listing or remote has been created.

The fresh qualification panel **disqualifies the inherited phi3 candidate under
its 16-ULP gate**: it reaches 18 ULP at one input. The failure reproduces with
100- and 200-digit mpmath, 110-digit Decimal and an exact-rational enclosure.
The original phi1 and phi2 candidates pass this panel, without an all-input proof.

The new standard piecewise Taylor candidate has an **author-derived 4-ULP bound**
on the whole finite-binary64 domain [-4,4], under the stated IEEE arithmetic
assumptions. It observed at most 2 ULP across 38,874 function evaluations. This
is a stronger accuracy artifact, not an independently reviewed theorem or a
novel approximation method. Its speed depends on the workload.

Eight complete ETDRK4 solver workloads, including proper fixed-step coefficient
reuse, show **no convincing overall speedup** over the existing stable method.
The highest apparent gain had only 5 wins in 11 paired rounds. System load was
high and uncontrolled. A production SciPy phi1 implementation also beats the
new candidate on the solver-spectrum array workload. Beating the general-purpose
hyp1f1 implementation for phi2/phi3 does not establish a specialized speed record.

Start here:

- [Full assessment and next tasks](research/qualification-20261022/ASSESSMENT.md)
- [Bound argument and assumptions](research/qualification-20261022/BOUND.md)
- [Reproducible counterexample](research/qualification-20261022/counterexample.json)
- [Raw qualification results](research/qualification-20261022/run-01/results.json)
- [Protocol fixed before evaluation](research/qualification-20261022/PROTOCOL.md)

On the qualified macOS/Apple Clang/Python 3.12 environment, with `uv` installed:

```sh
sh tools/setup.sh
.venv/bin/python tools/check.py
```

These commands install pinned dependencies, build both frozen C sources,
check current and historical identities, and run the current test suite.
It does not regenerate the original trial or overwrite either experiment.

To repeat timing/accuracy evaluation, use a new output directory:

```sh
.venv/bin/python research/qualification-20261022/qualify.py \
  --output research/qualification-20261022/replay-02
```

The archived inputs are now exposed. A repeat on them is replication, not a new
unseen contribution test. Native binaries and virtual environments are excluded
from the repository. Cross-platform qualification remains outstanding.
