# Current entry point

Read README.md, QUALIFICATION.md, FIRST_TASKS.md and EVALUATION.md first.
Run tools/setup.sh, tools/check.py and tools/pick.py. The inherited phi3 candidate
is disqualified under the 16-ULP gate. Use the new piecewise implementation for
bound audits; do not treat general hyp1f1 speed as a specialized frontier record.
Local contributions and expert-agent reviews are open. Preserve failures and
historical trial artifacts. Write new sessions under research/<session>/ and
verify each candidate. Independent scientific acceptance remains pending.

Historical guidance below describes the initial trial and is superseded where
it points to obsolete candidates or setup commands.

# Agent entry — open local pilot

Read DISCOVERY.md, PARTICIPATION.md, research/ASSESSMENT.md and results/trial.json.
Run `python tools/check.py --quick`, then `python tools/pick.py --seed 42`.
Use the activated environment from tools/setup.sh (or the shared parent .venv).
Choose one bounded task; expert-agent review is an explicitly welcome track.

Keep proposed changes and result receipts in a new research/<session>/ package.
Never overwrite the frozen initial trial, change its oracle to pass a candidate,
or claim exposed development/held-out data are unseen. Preserve failures and null
results. Change native code only with correctness checks and a fresh receipt.
Report compiler flags, source/input hashes, seeds, actual elapsed time, comparison
methods, timing repetitions, and memory/build tradeoffs. Do not use fast-math.

No user-level or scientific acceptance is inferred from a speedup. Do not describe
known arithmetic, Taylor series, or suffix lookup as a novel algorithm. A new
workload, minimized defect or justified negative result can be useful. Follow the
user's actual permission before external posting; local research is open.
