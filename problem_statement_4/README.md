# Problem 4 - The Chamber of Balance

Choose a valid subset of weights, generate a 4-digit code, then transform it.

## Input

- Target weight: W = 54
- Weights: 2, 6, 9, 12, 18, 24, 30

## Rules

1. Pick a subset whose sum is exactly W.
2. Use minimum number of weights.
3. If tied, choose the subset with maximum product.
4. Code logic uses selected values in high-to-low order.

## Approach Used In Code

Both Python and C follow these steps:

1. Generate all possible subsets.
2. Keep only subsets with sum = 54.
3. Select best subset by min length, then max product.
4. Sort chosen subset descending.
5. Build password digits D1 D2 D3 D4 from A, B, Z, L.
6. If digit sum is prime, reverse password; otherwise rotate right.

## Working For This Input

Chosen subset:

- 30, 24

Values:

- A = 30
- B = 24
- Z = 24
- L = 2 (even)

Password before transform:

- 4700

Digit sum:

- 4 + 7 + 0 + 0 = 11 (prime)

Final password:

- 0074
