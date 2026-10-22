# Reliable numerical computation

**Open for pre-release contributions and expert review.** Current focus: checked
accuracy bounds and useful numerical workloads. No end-to-end speedup or novel
approximation algorithm has been established.

Read [current qualification](QUALIFICATION.md), [first tasks](FIRST_TASKS.md),
[distribution instructions](DISTRIBUTION.md), and [evaluation rules](EVALUATION.md).
The inherited phi3 candidate failed its 16-ULP gate (18 ULP on the recorded Mac).
The new piecewise candidate has an author-derived <=4-ULP bound under explicit
IEEE assumptions, pending independent review. Historical results remain archived.

```sh
sh tools/setup.sh
source .venv/bin/activate
python tools/check.py
python tools/pick.py --task replication
python tools/contribute.py --order 3 --seed 419 --out research/my-first-trial
python tools/verify_candidate.py research/my-first-trial/candidate.json
```

Setup compiles existing source without regenerating historical results. Native
library filenames retain .dylib on both platforms; the loader accepts the native
format. macOS has been tested. Linux has a Docker/CI recipe but no successful run
is claimed until a receipt exists. See research/distribution-prep-20261022/STATUS.md.

Historical qualification scripts remain preserved for reproducing that specific
package. Use the current tools above for new work; they distinguish the archived
18-ULP failure from host-dependent live libm behavior.

Pilot-owned code is MIT; dependencies retain their licenses. No remote repository
or public hub listing exists. Intake is open independently of scientific signoff.
