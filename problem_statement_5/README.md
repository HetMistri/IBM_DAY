# Problem 5 - The Final Dial

Simulate a circular dial from 0 to 99 and compute the sum of all stop positions.

## Input

- Start position: 37
- Rotations:
  - R18
  - L42
  - R77
  - L15
  - R64

## Rules

- R means move right (increase value).
- L means move left (decrease value).
- Dial wraps around from 99 to 0 and 0 to 99.

## Approach Used In Code

Both Python and C use the same simple simulation:

1. Keep a current position variable.
2. For each rotation, parse direction and steps.
3. Update position using modulo 100.
4. Store the new stop value.
5. Sum all stops and print the final integer.

## Step-by-Step Stops

Starting from 37:

1. R18 -> 55
2. L42 -> 13
3. R77 -> 90
4. L15 -> 75
5. R64 -> 39

Stop list:

- 55, 13, 90, 75, 39

Final sum:

- 272

## Implementation Notes

Python (main.py):

- Uses a list of rotation strings and loop-based parsing.
- Uses modulo arithmetic directly for wrap-around.

C (main.c):

- Uses parallel arrays for directions and steps.
- Handles left-wrap explicitly when value becomes negative.
