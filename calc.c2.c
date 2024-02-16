// NAME: BOMA M. LEONARD 
// REG NO: ENE212-0085/2021

#include <stdio.h>

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers (ensuring non-zero divisor)
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

// Function to check if a number is even
int isEven(int num) {
    return num % 2 == 0;
}

// Function to compare two numbers and determine which is greater
void compareNumbers(int a, int b) {
    if (a > b) {
        printf("%d is greater than %d.\n", a, b);
    } else if (a < b) {
        printf("%d is greater than %d.\n", b, a);
    } else {
        printf("Both numbers are equal.\n");
    }
}

int main() {
    double num1, num2;
    printf("Enter the first number: \n ");
    scanf("%lf", &num1);
    printf("Enter the second number:\n ");
    scanf("%lf", &num2);


    double sum = add(num1, num2);
    double difference = subtract(num1, num2);
    double product = multiply(num1, num2);
    double quotient = divide(num1, num2);

    printf("The Sum is: %.2lf\n", sum);
    printf(" The Difference is: %.2lf\n", difference);
    printf("The Product is: %.2lf\n", product);
    printf(" The Quotient is: %.2lf\n", quotient);

    // Check if numbers are odd or even
    printf("%lf is %s.\n", num1, isEven((int)num1) ? "even" : "odd");
    printf("%lf is %s.\n", num2, isEven((int)num2) ? "even" : "odd");

    // Compare numbers
    compareNumbers((int)num1, (int)num2);

    return 0;
}
