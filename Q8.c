#include <stdio.h>

int main() {
    int n, a = 0, b = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);      // print current term
        nextTerm = a + b;      // calculate next term
        a = b;                 // shift values
        b = nextTerm;
    }

    return 0;
}
