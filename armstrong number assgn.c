//NAME: BOMA M. LEONARD
//REG NO: ENE212-0085/2021


#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    originalNum = num;
    while (originalNum != 0) {
        // Get the last digit
        remainder = originalNum % 10;
        // Add the cube of the digit to the result
        result += remainder * remainder * remainder;
        // Remove the last digit from the original number
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
