#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[100];  // maximum size

    // Input array elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display original array
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask for position of deletion
    printf("Where do you want to delete the element?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    int choice;
    scanf("%d", &choice);

    // Determine position
    if (choice == 1) {
        pos = 0;            // front
    } else if (choice == 2) {
        pos = n / 2;        // middle
    } else if (choice == 3) {
        pos = n - 1;        // end
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    // Shift elements to delete the element at pos
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;  // decrease array size

    // Display updated array
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
