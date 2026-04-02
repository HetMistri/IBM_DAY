🏛️ LEVEL–04: The Chamber of Balance
As you venture deeper into the temple, you arrive at a vast chamber illuminated by a dim golden glow.

At the center stands a single ancient altar.
Upon it rests a mysterious object.

An inscription on the wall reads:

“Balance the seen. Decode the unseen.
 Order defines the key.
 Precision reveals the truth.”

Beside you lies a set of marked weights and a traditional weighing scale.
A stone panel awaits — it requires a 4-digit password to proceed.

🔍 The Task

You are given:
A target weight W
A list of available weights

Your goal is to:
Select a valid combination of weights
Generate a 4-digit password
Apply a final transformation


⚖️ Step 1: Balance the Object

Select a subset of weights such that:
The sum equals exactly W
Each weight is used at most once


Selection Rules
Choose the combination with the minimum number of weights
If multiple such combinations exist:
Choose the one with the maximum product
Maintain the original order of weights

🔐 Step 2: Generate the Password
Let:
A = first selected weight
B = second selected weight
Z = last selected weight
L = number of selected weights
The password is [D1 D2 D3 D4]

If L is EVEN:
D1 = last digit of Z
D4 = last digit of A
D2 = first digit of (A × Z)
D3 = (B × A) mod 10

If L is ODD:
D1 = last digit of Z
D4 = last digit of A
D2 = last digit of (A + Z)
D3 = absolute value of (D2 − D1)


🔄 Step 3: Final Transformation
Compute the sum of the digits of the password

If the sum is PRIME:
Reverse the password

Otherwise:
Rotate the password to the right by one digit

⚠️ Notes
“First digit” = leftmost digit
“Last digit” = rightmost digit
Example: 1234 → 4123 (right rotation)

🧪 Object Weight: 54
Available Weights: ( 2 6 9 12 18 24 30 )

🎯 Final Task
Determine the final 4-digit password.

“The altar reveals nothing to the careless.
Only precise balance unlocks the truth.”