# Numerical-computation qualification round — 2026-10-22

Scope: local, author-run qualification. The original trial and its manifest stay
byte-for-byte unchanged. No remote, public launch, independent review or novelty
claim is implied. This is a substantial qualification round authorized by the
coordinator, beyond the starter task picker's 30-minute contribution suggestion.

## Questions and frozen choices

1. Does the inherited candidate remain useful against direct expm1 (phi1) and
   SciPy 1.18.0 exprel / hyp1f1 production routines? The latter is a general
   hypergeometric implementation, not a specialized phi2/phi3 speed frontier.
2. Can a standard piecewise Taylor implementation give a checkable, conditional
   on IEEE arithmetic, all-input accuracy bound? One candidate only: degree 14,
   centers at multiples of 1/2 from -4 through 4, nearest-center reduction,
   radius 1/4. No measured degree/partition tuning in this round.
3. Do scalar improvements matter in a complete ETDRK4 integration, with proper
   coefficient reuse? Use periodic Fourier-collocation Allen–Cahn on [0,2pi],
   u_t=.05*u_xx+u-u^3, u(0)=.3*cos(x)+.2*sin(2x), N=64 and 128,
   T=1. Fixed steps 64/128/256 plus prescribed varying steps at mean 1/128.
   The varying schedule is a workload probe, not an adaptive error controller.
   Compare against contour coefficients and an independent SciPy DOP853 solve
   of the same semidiscrete ODE. No claim about continuum PDE error.

Exact rational coefficient enclosures and Horner error propagation are separate
from the sampled mpmath/Decimal checks. No host-libm all-input accuracy assumption
will be presented as a theorem. The new polynomial contains no exp/expm1 calls.
Assume binary64 round-to-nearest ties-even, gradual underflow, separate multiply
and add, no contraction/fast-math. Runtime checks enforce the tested environment;
a written argument and code remain subject to independent numerical review.

Fresh evaluation seed 2026102231: uniform and near-zero/log-scaled points,
subnormals and neighborhoods of all new and inherited branches. These become
exposed qualification inputs after this run. Preserve any failure without tuning
on the same panel and calling it unseen. Target 16 integer ULP, positive finite
outputs. Include cancellation-prone controls and deliberately corrupted
coefficients/certificates to demonstrate rejection.

Timing: randomized paired rounds, baseline A/A repeats, raw samples, workload
hashes, compiler flags and environment. Scalar native-loop comparisons and
Python/NumPy array-call comparisons are separate. Application comparisons include
coefficient construction and time stepping, caching fixed-step coefficients once.
A practical speed claim requires >5% median end-to-end gain, consistent paired
wins, and A/A drift below 5%; otherwise report no demonstrated application gain.
One machine under uncontrolled system load cannot establish general superiority.
No independent reviewer is available in this session.

Primary references:
- SciPy exprel: https://docs.scipy.org/doc/scipy/reference/generated/scipy.special.exprel.html
- SciPy hyp1f1: https://docs.scipy.org/doc/scipy/reference/generated/scipy.special.hyp1f1.html
- Kassam & Trefethen (2005), DOI 10.1137/S1064827502410633:
  https://people.maths.ox.ac.uk/trefethen/publication/PDF/2005_111.pdf

Application code is a new implementation of the cited ETDRK4 method, not a copy
of the paper's MATLAB programs. Piecewise Taylor approximation is a standard
method; this experiment makes no algorithmic novelty claim.
