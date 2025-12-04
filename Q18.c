#include <stdio.h>

int main() {
    int n, i, j, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements: ");

    // Check for duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;  // move to next element after finding duplicate
            }
        }
    }

    if (!found) {
        printf("-1");
    }

    printf("\n");
    return 0;
}
