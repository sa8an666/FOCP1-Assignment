#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for peak
    int peakFound = 0;

    for (i = 0; i < n; i++) {
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1])) {
            printf("Peak element found: %d at index %d\n", arr[i], i);
            peakFound = 1;
            break;  // first peak
        }
    }

    if (!peakFound) {
        printf("No peak element found.\n");
    }

    return 0;
}
