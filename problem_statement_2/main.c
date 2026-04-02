#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    char encoded[] = "ngr%htqqfgtwfyj%nhy";
    char message[strlen(encoded) + 1];
    int len = strlen(encoded);
    message[0] = '\0';

    for (int i = 0; i < len; i++) {

        // decode character
        char decoded = encoded[i] - 5;
        message[i] = decoded;
        // check if alphabet
        if (isalpha(decoded)) {

            decoded = toupper(decoded);

            if (decoded >= 'A' && decoded <= 'F') {
                printf("UP ");
            }
            else if (decoded >= 'G' && decoded <= 'L') {
                printf("DOWN ");
            }
            else if (decoded >= 'M' && decoded <= 'R') {
                printf("LEFT ");
            }
            else if (decoded >= 'S' && decoded <= 'Z') {
                printf("RIGHT ");
            }
        }
    }

    printf("\n%s\n", message);

    return 0;
}