# Problem Statement 1 - Implementation Explanation

Both `main.py` and `main.c` solve the same task:

1. Read numbers from `numbers.txt`.
2. Keep only 6-digit values.
3. Check digit parity pattern `OOOEEO` (Odd, Odd, Odd, Even, Even, Odd).
4. Print values divisible by 13.

## Python (`main.py`)

### Flow

1. Opens `problem_statement_1/numbers.txt` and reads all tokens using `split()`.
2. Filters tokens where `len(number) == 6`.
3. Checks each digit index for the parity pattern:
	- `number[0]`, `number[1]`, `number[2]` must be odd.
	- `number[3]`, `number[4]` must be even.
	- `number[5]` must be odd.
4. Converts matching values to `int` and keeps those where `int(number) % 13 == 0`.
5. Prints the final list.

### Notes

- Uses list-building loops (`six_digit_numbers`, `pattern_numbers`, `divisible_by_13`) for step-by-step clarity.
- Output format is a Python list, for example: `['123451', '987641']`.

## C (`main.c`)

### Flow

1. Opens `problem_statement_1/numbers.txt` with `fopen` in read mode.
2. Reads one token at a time using `fscanf(file, "%s", number)`.
3. Skips any token whose length is not 6 (`strlen(number) != 6`).
4. Validates the same `OOOEEO` parity pattern by checking each character digit:
	- Converts char to digit using `(number[i] - '0')`.
	- Uses `% 2` to test odd/even.
5. Converts valid strings to integer with `atoi(number)`.
6. Prints values where `num % 13 == 0`.

### Notes

- Uses a `valid` flag to reject numbers that fail any parity check.
- Prints one matching number per line instead of a list.
- Includes file-open error handling (`if (file == NULL)`).