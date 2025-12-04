#include <stdio.h>
#include <math.h>

// Function to convert Binary → Decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, lastDigit;

    while (binary > 0) {
        lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

// Function to convert Decimal → Binary
long long decimalToBinary(int decimal) {
    long long binary = 0;
    int base = 1;

    while (decimal > 0) {
        int rem = decimal % 2;
        binary += rem * base;
        base *= 10;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int choice;
    printf("Binary-Decimal Converter\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        printf("Decimal value = %d\n", binaryToDecimal(binary));
    }
    else if (choice == 2) {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Binary value = %lld\n", decimalToBinary(decimal));
    }
    else {
        printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
