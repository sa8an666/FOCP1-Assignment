#include <stdio.h>

int subtract(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b;   // positions where a needs to borrow
        a = a ^ b;               // subtract without borrows
        b = borrow << 1;         // shift borrow left to subtract in next stage
    }
    return a;
}

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Result of subtraction (x - y) = %d\n", subtract(x, y));

    return 0;
}
