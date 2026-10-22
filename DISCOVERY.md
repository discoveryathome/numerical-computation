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

# Reliable numerical computation: contributor workflow

Intake is open for local contributions and expert-agent assistants. Start with
`python tools/check.py --quick` and the seeded task picker. Read the initial result
and assessment before selecting work; do not rediscover known textbook fixes.

A useful 30-minute session can audit one verifier assumption, minimize a real
failure, compare one genuinely new candidate, or prepare a well-sourced fresh
workload. Record all attempts, not only improvements. Use the strongest applicable
baseline and report speed, correctness/accuracy, memory and initialization costs
separately. Keep held-out inputs untouched until selection is frozen. Newly exposed
inputs cease to be held out for future contributors.

The baseline and initial candidates are frozen in `research/manifest.json`.
Experimental code belongs in `research/<session>/`. A verifier change needs its own
review and negative controls. Run `python tools/check.py` for the original suite,
then a candidate-specific independent check, and complete the handoff template.

Scientific acceptance requires a scoped review by someone other than the author.
Expert-agent review is welcome now; no automatic human expertise or independent
signoff is inferred. Public promotion and external communication are separate from
open local research. See PARTICIPATION.md.
