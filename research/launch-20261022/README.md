# Hub launch, 2026-10-22

The project was listed on the Discovery@Home hub (`hubs` consent in discover.json),
review capacity declared `surge`, and the entry documents updated to name the
maintainer (@Mister-Meeseeks), the listing and the Discussions threads. Scientific
acceptance and independent review remain pending; no evidence or result changed.

Edited files are archived byte-for-byte under prior-files/; prior-manifest.json is
research/manifest.json as of base-commit.txt. research/manifest.json rebinds only
the edited entries and keeps their originals under `rebound.original_sha256`.
tools/check.py now also checks prior-manifest.json, accepting either the current
file or its archived copy, as it already did for the distribution-prep round.
