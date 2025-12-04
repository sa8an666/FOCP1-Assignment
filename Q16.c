#include <stdio.h>

int main() {
    int n, i, pos, element;

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

    // Ask for position of insertion
    printf("Where do you want to insert the element?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    int choice;
    scanf("%d", &choice);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Determine position
    if (choice == 1) {
        pos = 0;               // front
    } else if (choice == 2) {
        pos = n / 2;           // middle
    } else if (choice == 3) {
        pos = n;               // end
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    // Shift elements to make space
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;
    n++;  // increase array size

    // Display updated array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
