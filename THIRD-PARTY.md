# Source and license provenance

Pilot-owned source, tests and docs are MIT. Scalar Taylor coefficients are the
mathematical values 1/(j+k)!; phi functions and stable series/expm1 evaluation are
established methods. No Herbie, FPBench or phi_funm source is copied or benchmarked.
The papers and repositories in research/sources.json establish context only.

Installed dependencies are external packages with their own notices: NumPy BSD,
mpmath BSD, pytest MIT, jsonschema MIT (transitive licenses remain with those
packages). The platform's libm supplies exp/expm1 and no libm code is redistributed.
Inputs are synthetic binary64 values. The generated native source is pilot-owned.

spec/*.schema.json are Discovery@Home v0 schemas copied unmodified from
https://github.com/discoveryathome/discover (Apache-2.0; see spec/PROVENANCE.md).
Hub-launch audit, 2026-10-22: no third-party papers, PDFs, web snapshots, test
suites, benchmark files or vendored code are stored. Herbie, FPBench and
arXiv:2506.01193 (arXiv non-exclusive distribution license) are cited by URL only.
