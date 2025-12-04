#include <stdio.h>

int main() {
    int n = 5;   // Number of rows

    for (int i = 1; i <= n; i++) {
        int bit = 0;   // start with 0

        // First half
        for (int j = 1; j <= i; j++) {
            printf("%d", bit);
            bit = 1 - bit;   // toggle between 0 and 1
        }

        printf(" "); // space between two patterns

        bit = 0;  // reset for second half

        // Second half (same as first)
        for (int j = 1; j <= i; j++) {
            printf("%d", bit);
            bit = 1 - bit;
        }

        printf("\n");
    }

    return 0;
}
