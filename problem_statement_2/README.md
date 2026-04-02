# Problem 2 - The Ciphered Path

Decode a string by shifting ASCII values and convert letters into movement instructions.

## Input

- Encoded text: ngr%htqqfgtwfyj%nhy

## Rules

1. Decode each character using ASCII shift: value - 5.
2. For alphabetic decoded letters, map to direction:
   - A to F -> UP
   - G to L -> DOWN
   - M to R -> LEFT
   - S to Z -> RIGHT
3. Ignore non-alphabet characters for movement.

## Approach Used In Code

Both Python and C do this in one pass:

1. Read each encoded character.
2. Decode by subtracting 5.
3. Build the decoded message.
4. If decoded char is alphabetic, map it to a direction.
5. Print movement sequence and message.

## Decoded Message

- ibm collaborate ict

## Direction Sequence

- DOWN UP LEFT UP LEFT DOWN DOWN UP UP LEFT LEFT UP RIGHT UP DOWN UP RIGHT

## Implementation Notes

Python (main.py):

- Builds a list of directions and a message string.
- Prints message first, then directions.

C (main.c):

- Decodes in a loop using char arithmetic.
- Prints directions while processing, then prints the message.