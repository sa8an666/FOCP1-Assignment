#include <stdio.h>

int main() {
    int n, i;
    int even_count = 0, odd_count = 0;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    int scores[n], even_array[n], odd_array[n];

    // Input array values
    printf("Enter the scores:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Separate even and odd numbers
    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[even_count] = scores[i];
            even_count++;
        } else {
            odd_array[odd_count] = scores[i];
            odd_count++;
        }
    }

    // Print even array
    printf("\nEven numbers: ");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }

    // Print odd array
    printf("\nOdd numbers: ");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }

    printf("\n");

    return 0;
}
