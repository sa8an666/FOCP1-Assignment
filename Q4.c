#include <stdio.h>

// 1. Swap using a temporary variable
void swap_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 2. Swap using arithmetic (no temp variable)
void swap_arithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// 3. Swap using bitwise XOR (no temp variable)
void swap_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// 4. Swap using pointers (direct pointer manipulation)
void swap_pointers(int *a, int *b) {
    // Same as using temp, but illustrates pointer usage
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nOriginal values: x=%d, y=%d\n", x, y);

    // Method 1
    swap_temp(&x, &y);
    printf("After swap using temp variable: x=%d, y=%d\n", x, y);

    // Swap back for next method
    swap_temp(&x, &y);

    // Method 2
    swap_arithmetic(&x, &y);
    printf("After swap using arithmetic: x=%d, y=%d\n", x, y);

    // Swap back
    swap_arithmetic(&x, &y);

    // Method 3
    swap_xor(&x, &y);
    printf("After swap using XOR: x=%d, y=%d\n", x, y);

    // Swap back
    swap_xor(&x, &y);

    // Method 4
    swap_pointers(&x, &y);
    printf("After swap using pointers: x=%d, y=%d\n", x, y);

    return 0;
}
