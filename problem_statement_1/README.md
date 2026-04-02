# Problem 1 - The Temple Entrance

Find the 6-digit number that matches a strict odd/even pattern and is divisible by 13.

## Input

- File: numbers.txt
- Each entry is treated as a number-like token

## Rules

A candidate is valid only if all are true:

1. It has exactly 6 digits.
2. It follows the pattern O O O E E O.
3. It is divisible by 13.

Where:

- O = odd digit
- E = even digit

## Approach Used In Code

Both Python and C follow the same pipeline:

1. Read all values from the file.
2. Keep only 6-digit values.
3. Check each digit against O O O E E O.
4. Keep values divisible by 13.
5. Print final result(s).

## Implementation Notes

Python (main.py):

- Uses lists for each filtering stage.
- Reads from problem_statement_1/numbers.txt.
- Prints result as a Python list.

C (main.c):

- Reads token-by-token with fscanf.
- Uses a valid flag for parity checks.
- Prints each matching value on a new line.

## Final Answer For Current Input

- 337805