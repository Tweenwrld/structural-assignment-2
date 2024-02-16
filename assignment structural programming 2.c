// BOMA M. LEONARD ENE212-0085/2021
#include <stdio.h>

// Function to check if a number is odd
int isOdd(int num) {
    return num % 2 != 0;
}

// Function to perform multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function to perform division
float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Check if numbers are divisible
    if (num1 % num2 == 0 || num2 % num1 == 0) {
        printf("Numbers are divisible.\n");
    } else {
        printf("Numbers are not divisible.\n");
    }

    // Determine if numbers are odd or even
    printf("Number 1 is %s.\n", isOdd(num1) ? "odd" : "even");
    printf("Number 2 is %s.\n", isOdd(num2) ? "odd" : "even");

    // Compare and identify the greater number
    if (num1 > num2) {
        printf("Number 1 is greater than Number 2.\n");
    } else if (num2 > num1) {
        printf("Number 2 is greater than Number 1.\n");
    } else {
        printf("Both numbers are equal.\n");
    }

    // Perform multiplication and division
    printf("Multiplication result: %d\n", multiply(num1, num2));
    printf("Division result: %.2f\n", divide(num1, num2));

    return 0;
}

