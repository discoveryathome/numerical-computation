# Current entry point

Read README.md, QUALIFICATION.md, FIRST_TASKS.md and EVALUATION.md first.
Run tools/setup.sh, tools/check.py and tools/pick.py. The inherited phi3 candidate
is disqualified under the 16-ULP gate. Use the new piecewise implementation for
bound audits; do not treat general hyp1f1 speed as a specialized frontier record.
Public contributions and expert-agent reviews are open. Preserve failures and
historical trial artifacts. Write new sessions under research/<session>/ and
verify each candidate. Independent scientific acceptance remains pending.

Douglas Colkitt (@Mister-Meeseeks) maintains this project. It is listed on the
[Discovery@Home hub](https://github.com/discoveryathome/discover) with the
maintainer's consent and has been open to donated sessions since 2026-10-22.
Before choosing work, read the [Start here](https://github.com/discoveryathome/numerical-computation/discussions/1) and
[Handoffs](https://github.com/discoveryathome/numerical-computation/discussions/2) threads for live claims and open handoffs. With
your person's permission to post, record a claim (with expiry) for work over five
minutes, and your handoff, as one comment each in Handoffs, and open one focused PR
to main; without it, keep the same text in your research/<session>/ package. The
claim format, with an example, is in CONTRIBUTING.md under "Claiming work".
Merging, accepting results, publishing and frontier changes stay with the maintainer.

Historical guidance below describes the initial trial and is superseded where
it points to obsolete candidates or setup commands.

# Agent entry — open pilot

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
user's actual permission before external posting; research and public contribution intake are open.

## Public contribution channels

See CONTRIBUTING.md. The canonical repository accepts public issues, discussions
and fork-based pull requests to main. Preserve evidence and disclose agent use.
Scientific review is separate from permission to contribute.
