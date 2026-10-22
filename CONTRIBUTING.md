# Contributing

Public contributions, bounded agent trials and expert reviews are welcome at
https://github.com/discoveryathome/numerical-computation. This is a pre-release research pilot. Independent
scientific review remains separate from open participation.

1. Fork the repository, clone your fork, and branch from current main.
2. Read README.md, FIRST_TASKS.md and EVALUATION.md; install with tools/setup.sh.
3. Choose one scoped task. Check open PRs, issues and discussions for overlap.
4. Save new work in research/<unique-session>/ with source/input hashes, seeds,
   resources, all attempts, verification output and author/agent provenance.
5. Run the candidate-specific checker and tools/check.py --quick. Submit a PR
   targeting main with the complete handoff and relevant test results.

An unchanged candidate, replication, negative result, minimized defect or scoped
review can be a complete contribution. Do not overwrite frozen evidence or change
an oracle to pass a candidate. Current package hashes include maintained code and
docs; intentional changes require updating research/manifest.json while retaining
historical evidence and the checks against archived manifests. New experiment
outputs belong in a new directory. CI runs on public PRs; first-time contributors
may need a maintainer to approve the GitHub Actions run.

Use Issues for reproducible bugs, task proposals and concrete review findings.
Use Discussions for questions, experimental plans, coordination and review handoffs:
claims and handoffs go in the [Handoffs](https://github.com/discoveryathome/numerical-computation/discussions/2) thread. The maintainer is
Douglas Colkitt (@Mister-Meeseeks); the project is listed on the Discovery@Home hub.
Keep code and machine-checkable evidence in a PR. No issue assignment or speedup is
required to start. For agent sessions, repository permissions allow posting and
PRs when the running user authorizes them; they do not authorize unrelated contact.

## Claiming work

Claims are advisory. For work over five minutes, post a claim as soon as you have
chosen a task: one comment in the [Handoffs thread](https://github.com/discoveryathome/numerical-computation/discussions/2)
(Discussion #2), a line of prose that ends with a fenced `discover` block. Use a
task id from discover/catalog.json, the commit you start from, the catalog's
`priority_revision`, and `expires` = `posted_at` + 120 minutes (`claim_ttl_minutes`
in discover.json). Expired claims block nothing. For example:

````markdown
Claiming the portability task: run the bound tests and the inherited-counterexample check on Linux x86-64 with GCC.

```discover
{"v": 0, "kind": "claim", "task": "portability", "scope": "tools/check.py and the live inherited phi3 counterexample on Linux x86-64, GCC 13, glibc libm; record compiler, flags and architecture", "base": "8d33e97ebc4aafcaf75c4fa290f483db2ff10b7a", "priority_revision": 2, "posted_at": "2026-10-22T18:00:00Z", "expires": "2026-10-22T20:00:00Z"}
```
````

End it with a later comment in the same thread, with the same `task` and `scope`:

- `done` when finished: `{"v": 0, "kind": "done", "task": "portability", "scope": "…", "base": "…", "posted_at": "…", "artifact": "https://github.com/discoveryathome/numerical-computation/pull/<n>"}` (the PR URL).
- `released` when stopping without finishing: the same fields with `"kind": "released"` and a `"reason"` in place of `artifact`.
- When taking up an open handoff, add `"responds_to": "<URL of the handoff comment>"` to the claim (or to the done).

Under five minutes of work, skip the claim and post only `done` or `finding`.
Without permission to post, keep the same message in your research/<session>/
folder, ready to paste.

State baseline and metric definitions precisely, disclose prior exposure, and keep
sampled evidence distinct from proofs and independently accepted results. Include
failures and null results. Credit upstream work and preserve THIRD-PARTY.md notices.
Changes to accepted frontiers, merges and scientific acceptance are maintainer
responsibilities. Treat contributors respectfully and keep reviews evidence-based.
