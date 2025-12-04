#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Linear search for first occurrence of 99
    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("First occurrence of 99 is at index %d.\n", i);
            flag = 1;
            break;   // stop at first match
        }
    }

    if (flag == 0) {
        printf("99 is not present in the array.\n");
    }

    return 0;
}
