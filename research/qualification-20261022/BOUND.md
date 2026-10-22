# What the 4-ULP bound covers

This is an author-derived, executable forward-error argument, **pending independent
review**, not a formal proof assistant certificate. It covers the new degree-14
piecewise implementation for each phi_1, phi_2 and phi_3, finite binary64 inputs
in [-4,4], and integer representable-number distance from the correctly rounded
exact function. It does not cover the inherited expm1-based candidates, complex
arguments, other domains, nonstandard rounding modes or downstream solver error.

Assumptions: IEEE binary64, round-to-nearest ties-even, gradual underflow,
separate rounded multiply/add, no fast-math or contraction, and standard nearbyint
semantics. The build flags, binary64 static assertions, rounding-mode and
subnormal runtime checks are in the archived sources. These checks are necessary
environment checks, not a proof of compiler correctness.

## Exact coefficient enclosures

For k=1,2,3, write

    phi_k(x) = integral_0^1 exp(s*x) (1-s)^(k-1)/(k-1)! ds.

The coefficient of y^j in phi_k(c+y) is

    a_j(c) = sum_{m>=0} binomial(m+j,j) c^m/(m+j+k)!.

`bounds.py` evaluates the first 100 terms using exact rational arithmetic. With
term 0 equal to 1/(j+k)!, successive terms have ratio

    c * (m+j) / (m*(m+j+k))    for m=1,2,... .

The absolute tail starting at term 100 is bounded by its first absolute term
divided by (1-|c|/101). This follows because every subsequent absolute ratio
is at most |c|/101 < 1. Thus each coefficient has rational lower/upper bounds.
Both endpoints lie strictly inside the rounding cell of the stored hexadecimal
binary64 coefficient; the code checks the two exact adjacent-float midpoints.
Coefficient rounding errors are retained in the forward-error calculation.

## Range reduction and analytic remainder

Centers are -4,-3.5,...,4. The expression `.5*nearbyint(2*x)` selects a nearest
center exactly, including ties. Multiplication by 2 is exact on the domain.
For a nonzero center, x and c have the same sign and their magnitudes differ by
at most a factor of two, so subtraction is exact by Sterbenz's lemma. For c=0,
subtraction is trivially exact. Consequently y=x-c is exact and |y| <= 1/4.

The integral representation bounds the degree-d Taylor remainder by

    exp(max(c+1/4,0)) * (1/4)^(d+1) / (d+k+1)!.

The exponential upper bound itself is computed from a positive rational series
and a geometric tail, not from the host exp implementation. At endpoint centers
the symmetric radius slightly overcovers the actual input domain, which is safe.

## Rounded Horner evaluation

Let u=2^-53 and eta=2^-1075. A rounded operation on an exact value z, with no
overflow, has error at most u*|z|+eta; the additive term covers gradual underflow.
Let V bound the magnitude of the computed partial Horner value and E bound its
distance from the exact partial polynomial with true Taylor coefficients.
Initialize V=|stored a_d| and E=its coefficient error. At each descending j:

    multiplication_error = u*V*r + eta,  r=1/4
    W = V*r + multiplication_error
    addition_error = u*(W + |stored a_j|) + eta
    E = r*E + multiplication_error + coefficient_error_j + addition_error
    V = W + |stored a_j| + addition_error.

Add the analytic remainder to E. All calculations in this recurrence use exact
rationals. Every stored coefficient has magnitude <16, so V remains below 22
throughout this recurrence (and well below overflow); the final computed bounds
are also checked. This gives an absolute error bound for every input in the cell.

## Converting to integer ULP distance

The integral also establishes strict positivity and monotonicity in x. Exact
series enclosures at each cell's endpoints give lower/upper bounds L,H on the
true function. Its final rounding error is at most

    R = 2^(floor(log2(H))-53).

Both the computed output and the correctly rounded reference are positive and
at least L-E-R. The minimum representable spacing between them is therefore at
least s=2^(floor(log2(L-E-R))-52). Their integer ULP distance is bounded by
ceil((E+R)/s). The largest certificate value across all 51 order/cell pairs is 4.
This calculation handles cells crossing binade boundaries conservatively.

`--verify` regenerates both the certificate and C source byte for byte. The test
suite checks coefficient rounding using a separate high-precision hypergeometric
identity, detects coefficient/certificate corruption, and checks compiled outputs
against other reference implementations. Alternative implementations and these
tests do **not** constitute independent scientific review.

Reviewer priorities: audit the tail index, exact range reduction at ties and
subnormals, rounding recurrence, binade/ULP conversion, C-to-argument correspondence,
and compiler/architecture assumptions. A smaller sampled error is not a smaller
all-input bound.
