#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // OPEN THE FILE
    FILE *file = fopen("problem_statement_1/numbers.txt", "r");

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    char number[20];

    // READ EACH NUMBER FROM FILE
    while (fscanf(file, "%s", number) != EOF) {

        // CHECK LENGTH = 6
        if (strlen(number) != 6) {
            continue;
        }

        int valid = 1;

        // CHECK EACH DIGIT ONE BY ONE

        // O O O E E O

        // 1st digit (odd)
        if ((number[0] - '0') % 2 == 0) {
            valid = 0;
        }

        // 2nd digit (odd)
        if ((number[1] - '0') % 2 == 0) {
            valid = 0;
        }

        // 3rd digit (odd)
        if ((number[2] - '0') % 2 == 0) {
            valid = 0;
        }

        // 4th digit (even)
        if ((number[3] - '0') % 2 != 0) {
            valid = 0;
        }

        // 5th digit (even)
        if ((number[4] - '0') % 2 != 0) {
            valid = 0;
        }

        // 6th digit (odd)
        if ((number[5] - '0') % 2 == 0) {
            valid = 0;
        }

        // IF PATTERN FAILED → SKIP
        if (valid == 0) {
            continue;
        }

        // CONVERT STRING TO INTEGER
        int num = atoi(number);

        // CHECK DIVISIBLE BY 13
        if (num % 13 == 0) {
            printf("%s\n", number);
        }
    }

    fclose(file);
    return 0;
}