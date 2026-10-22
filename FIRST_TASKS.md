# First contribution packages

Intake is open. Choose one task and return a complete handoff, including failures.
See EVALUATION.md for exposure rules and FIRST_REVIEW.md for independent review.
Budgets are defaults for trial sessions, not a reason to refuse explicitly authorized
larger work. Record extensions and actual resources.

## replication: Reproduce the current piecewise candidate on a fresh sampled panel

Budget: 30 minutes; 261 sampled inputs.

```sh
python tools/contribute.py --order 3 --seed 419 --out research/my-first-trial
```

Deliverable: candidate.json and handoff.json; run tools/verify_candidate.py. No improvement is required, and this is not an all-input proof.

## bound-audit: Audit one step of the conditional 4-ULP argument

Budget: 60 minutes; choose coefficient tails, range reduction, Horner rounding, or ULP conversion.

```sh
python -m pytest -q tests/test_qualification.py
```

Deliverable: A scoped review of BOUND.md against bounds.py plus a reproducer or explicit assumptions. Source regeneration alone does not establish independent mathematical review.

## coefficient-workload: Test joint coefficient construction on a motivated workload

Budget: 60 minutes initial profiling; freeze any larger experiment before tuning.

```sh
python tools/check.py --quick
```

Deliverable: Use a production workload with a measured bottleneck and an equally fused baseline. Keep fixed-step caching. Report coefficient accuracy and complete integration cost; a null bottleneck result is useful.

## portability: Check the arithmetic environment on another architecture

Budget: 45 minutes including setup.

```sh
python tools/check.py
```

Deliverable: Record compiler/flags/architecture, bound tests and live inherited-counterexample output. The historical 18-ULP value is a recorded fact, not a requirement imposed on a different libm.
