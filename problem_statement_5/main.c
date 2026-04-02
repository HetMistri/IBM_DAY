#include <stdio.h>

int main() {
    int start = 37;
    const char directions[] = {'R', 'L', 'R', 'L', 'R'};
    const int steps[] = {18, 42, 77, 15, 64};
    const int total_moves = 5;

    int current = start;
    int stopped_numbers[5];

    for (int i = 0; i < total_moves; i++) {
        if (directions[i] == 'R') {
            current = (current + steps[i]) % 100;
        } else {
            current = (current - steps[i]) % 100;
            if (current < 0) {
                current += 100;
            }
        }

        stopped_numbers[i] = current;
    }

    int final_sum = 0;
    for (int i = 0; i < total_moves; i++) {
        final_sum += stopped_numbers[i];
    }

    printf("%d\n", final_sum);
    return 0;
}
