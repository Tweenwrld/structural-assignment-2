// NAME: BOMA M. LEONARD
// REG NO: ENE212-0085/2021

#include <stdio.h>

// Function to generate Fibonacci series iteratively
void generateFibonacciIterative(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series (Iterative): ");
    printf("%d, %d, ", t1, t2);

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
}

// Function to generate Fibonacci series recursively
int generateFibonacciRecursive(int n) {
    if (n <= 1)
        return n;
    return generateFibonacciRecursive(n - 1) + generateFibonacciRecursive(n - 2);
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Generate Fibonacci series iteratively
    generateFibonacciIterative(n);

    printf("\n");

    // Generate Fibonacci series recursively
    printf("Fibonacci Series (Recursive): ");
    for (int i = 0; i < n; ++i) {
        printf("%d", generateFibonacciRecursive(i));
        if (i != n - 1)
            printf(", ");
    }

    return 0;
}
