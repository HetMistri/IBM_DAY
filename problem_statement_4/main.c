#include <stdio.h>
#include <stdlib.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int first_digit(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int main() {

    int W = 54;
    int weights[] = {2, 6, 9, 12, 18, 24, 30};
    int n = 7;

    // Step 1: try all subsets and pick best one
    int best_mask = -1;
    int best_len = 1000000;
    long long best_product = -1;

    for (int mask = 1; mask < (1 << n); mask++) {
        int sum = 0;
        int len = 0;
        long long product = 1;

        for (int i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                sum += weights[i];
                len++;
                product *= weights[i];
            }
        }

        if (sum != W) {
            continue;
        }

        if (len < best_len || (len == best_len && product > best_product)) {
            best_len = len;
            best_product = product;
            best_mask = mask;
        }
    }

    if (best_mask == -1) {
        printf("No valid subset\n");
        return 0;
    }

    int subset[20];
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if ((best_mask >> i) & 1) {
            subset[idx++] = weights[i];
        }
    }

    int L = idx;

    // Use selected weights in high-to-low order.
    for (int i = 0; i < L; i++) {
        for (int j = i + 1; j < L; j++) {
            if (subset[j] > subset[i]) {
                int temp = subset[i];
                subset[i] = subset[j];
                subset[j] = temp;
            }
        }
    }

    int A = subset[0];
    int Z = subset[L - 1];

    // Step 2: generate password
    int D1 = Z % 10;
    int D4 = A % 10;

    int D2, D3;
    if (L % 2 == 0) {
        int B = subset[1];
        D2 = first_digit(A * Z);
        D3 = (B * A) % 10;
    } else {
        D2 = (A + Z) % 10;
        D3 = D2 - D1;
        if (D3 < 0) {
            D3 = -D3;
        }
    }

    int password[4] = {D1, D2, D3, D4};

    // Step 3: transformation
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += password[i];
    }

    if (is_prime(sum)) {
        // reverse
        printf("%d%d%d%d\n", password[3], password[2], password[1], password[0]);
    } else {
        // rotate right
        printf("%d%d%d%d\n", password[3], password[0], password[1], password[2]);
    }

    return 0;
}