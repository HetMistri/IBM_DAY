W = 54
weights = [2, 6, 9, 12, 18, 24, 30]


def is_prime(n):
    if n < 2:
        return False
    i = 2
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True


def first_digit(n):
    while n >= 10:
        n //= 10
    return n


# Step 1: Try all subsets, choose minimum size, then maximum product.
best_subset = None
best_len = 10**9
best_product = -1

n = len(weights)
for mask in range(1, 1 << n):
    subset = []
    total = 0
    product = 1

    for i in range(n):
        if (mask >> i) & 1:
            subset.append(weights[i])
            total += weights[i]
            product *= weights[i]

    if total != W:
        continue

    L = len(subset)
    if L < best_len or (L == best_len and product > best_product):
        best_subset = subset
        best_len = L
        best_product = product

if best_subset is None:
    print("No valid subset")
    raise SystemExit

# Use selected weights in high-to-low order.
best_subset = sorted(best_subset, reverse=True)

# Step 2: Build password digits
A = best_subset[0]
Z = best_subset[-1]
L = len(best_subset)

D1 = Z % 10
D4 = A % 10

if L % 2 == 0:
    B = best_subset[1]
    D2 = first_digit(A * Z)
    D3 = (B * A) % 10
else:
    D2 = (A + Z) % 10
    D3 = abs(D2 - D1)

password = [D1, D2, D3, D4]

# Step 3: Prime -> reverse, else rotate right
digit_sum = sum(password)
if is_prime(digit_sum):
    password.reverse()
else:
    password = [password[-1]] + password[:-1]

print("".join(map(str, password)))