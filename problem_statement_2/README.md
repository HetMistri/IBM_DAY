# Problem Statement 2 - Implementation Explanation

Both programs process the encoded string:

`ngr%htqqfgtwfyj%nhy`

They decode each character by shifting it 5 positions backward in ASCII, then map decoded letters to movement directions.

## Core Logic Used in Both Implementations

1. Take each character from the encoded text.
2. Decode using: `decoded = original - 5` (ASCII shift).
3. If decoded character is an alphabet letter:
	- Convert it to uppercase.
	- Map it to a direction by alphabet range:
	  - `A-F` -> `UP`
	  - `G-L` -> `DOWN`
	  - `M-R` -> `LEFT`
	  - `S-Z` -> `RIGHT`

Decoded message from the input is:

`IBM COLLABORATE ICT`

## Python (`main.py`)

### Flow

1. Iterates over each character in `encoded`.
2. Decodes with `chr(ord(ch) - 5)`.
3. For alphabetic decoded characters:
	- Converts to uppercase.
	- Appends matching direction string into `result` list.
4. Appends every decoded character (including spaces) into `message`.
5. Prints:
	- full decoded message
	- space-separated direction sequence

### Output Behavior

- First line: decoded text.
- Second line: directions.

## C (`main.c`)

### Flow

1. Iterates through `encoded` using an index loop.
2. Decodes each char with `decoded = encoded[i] - 5`.
3. Add decoded to message array.
4. If `decoded` is alphabetic (`isalpha`):
	- Converts to uppercase (`toupper`).
	- Prints direction based on the same range mapping.
5. Print decoded message

### Output Behavior

- Prints direction sequence directly to stdout.
- Prints the decoded message text.