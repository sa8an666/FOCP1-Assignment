#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store last element
    int last = arr[n - 1];

    // Shift all elements to the right by one
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Put last element at first position
    arr[0] = last;

    // Print rotated array
    printf("Array after clockwise rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
