#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n; // Store the original number

    // Reverse the number and store it in 'reversed'
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // Check if the original and reversed numbers are equal
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
