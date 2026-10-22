# Assessment: numerical computation

**Recommendation: promising second pilot, framed as numerical reliability and
measured optimization; add a real application before broad promotion.**
The local project accepts trial and expert-agent work. The concrete question is
whether scalar phi_1, phi_2 and phi_3 evaluations can use fewer operations while
meeting a fixed sampled accuracy budget. These entire functions arise in
exponential integration, but this trial is not a matrix-function or ODE-solver test.

## Trial and results

For finite binary64 x in [-4,4], define phi_k(x) = sum_{j>=0} x^j/(j+k)!,
with phi_k(0)=1/k!. The baseline uses a degree-18 Taylor polynomial near zero and
expm1-based formulas elsewhere. A naive exp-minus-polynomial implementation is
only a negative control. Direct expm1/x is an additional strong control for phi_1;
using expm1 alone does not cure higher-order cancellation near zero.

Tested 48 degree/threshold candidates per function, plus three controls. Selection
minimized development timing among candidates within 16 ULP of the rounded
high-precision reference. Development and held-out panels each have 1,840 inputs
per function, including logarithmically distributed tiny values, uniform values
and threshold neighbors. Decimal at 110 digits and mpmath at 100 digits agreed on
all 11,040 initial reference values. These are separate arithmetic implementations,
not independent external review or rigorous rounding certificates.

| Function | Selected candidate | Held-out speed vs stable baseline | Held-out maximum ULP, baseline → candidate | Fresh stress maximum ULP |
|---|---|---:|---:|---:|
| phi_1 | degree 6, threshold 0.015625 | 1.91x | 1 → 1 | 1 |
| phi_2 | degree 10, threshold 0.25 | 1.70x | 2 → 4 | 6 |
| phi_3 | degree 12, threshold 0.5 | 1.51x | 5 → 14 | 16 |

The post-selection stress test used 8,136 further samples per function (24,408
in total), including 4,000 densely adjacent branch-boundary values per function.
All stayed within 16 ULP; phi_3 reached that ceiling. No candidate was retuned after
this probe. A formal or interval error bound is still missing. This is a speed/
accuracy tradeoff, not an improvement in every accuracy metric.

The speed table compares to the conservative degree-18 implementation. For phi_1,
the stronger expm1/x control had a development median of 7.33 ns versus 5.82 ns for
the selected candidate, rather than the larger headline ratio against degree 18.
That stronger comparison needs held-out isolated replication. No optimized
production phi library, Herbie-generated implementation, or complete integrator
was beaten. The artificial distribution places substantial weight near zero.
High shared-machine load makes all timing claims provisional, even though the
initial A/A medians were close.

## Contribution and next work

The useful asset is a reproducible accuracy/cost task with a separate Decimal
oracle, explicit errors, retained losing variants and small candidate certificates.
The observed gain is conventional polynomial/branch tuning. There is no new
numerical method or novel result claim. The candidate space is currently too
small to sustain many donors without exhausting straightforward tuning.

Locally: add interval/rounding error bounds, another implementation baseline,
fresh domain-specific workloads, coefficient-generation or piecewise-search
methods, and a real exponential-integrator end-to-end evaluation. Keep accuracy,
operation count, timings and downstream solver error separate. A reviewer can
challenge assumptions or supply a counterexample immediately.

Outside help: a numerical analyst or scientific-software maintainer should choose
useful kernels and distributions, assess acceptable error budgets, and review
floating-point soundness and integration utility. A quiet second architecture is
needed for performance replication, not for permission to contribute.

Context: [Herbie](https://github.com/herbie-fp/herbie) is an established accuracy
optimizer; [matrix phi-function research](https://arxiv.org/abs/2506.01193) concerns
a substantially broader problem. Neither was reproduced or claimed surpassed here.
Scientific review is pending; participation is open.
