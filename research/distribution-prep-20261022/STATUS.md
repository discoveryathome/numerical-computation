# Current distribution status — numerical computation

Open for focused accuracy audits, workload discovery and bounded agent trials.
The default README, agent guidance, task picker and frontier now direct contributors
to the qualification round. The inherited phi3 candidate is explicitly disqualified
under its 16-ULP gate; its historical counterexample remains preserved. The new
piecewise candidate's <=4-ULP bound is author-derived and awaits independent review.
No end-to-end solver speedup or new approximation algorithm has been established.

Setup is idempotent and compiles frozen sources without regenerating original
results. tools/contribute.py produces a sampled certificate and handoff with input
and source hashes. The first local session checked 261 phi3 inputs, max observed
error 1 ULP, with agreeing mpmath/Decimal references. An unchanged result is valid.

Current tests distinguish the exact archived 18-ULP witness from a live host-libm
result. A different library need not reproduce that exact error; the current
piecewise candidate must still satisfy its checks. The original qualification
code/results/tests remain unchanged; current portable tests live under tests/.
Historical entry-point versions and their manifest are saved under prior-files/.

Four concrete tasks cover replication, a scoped bound audit, a motivated joint-
coefficient experiment and portability. Review BOUND.md before asserting a theorem.
Any optimization experiment should first identify a measured application bottleneck,
use an equally optimized baseline, and preserve fixed-step coefficient reuse.

Linux has a prepared Docker/CI recipe; its execution remains unverified because
the local Docker engine did not respond. No independent outside contributor or
reviewer was available. FIRST_REVIEW.md is ready to hand off; see MIGRATION.md.
