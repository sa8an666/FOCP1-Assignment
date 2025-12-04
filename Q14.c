#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2)
        return 0;  // not prime
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;  // divisible → not prime
    }
    return 1;  // prime
}

int main() {
    int n, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count prime numbers
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    printf("Number of prime numbers in the array = %d\n", count);

    return 0;
}
