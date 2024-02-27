#include <stdio.h>

int main() {
    int arr[11] = {0}; // Initialize an array of 11 elements
    int i, x, pos, n = 10; // n represents the current number of elements in the array

    // Populate the array with numbers from 1 to 11
    for (i = 0; i < 10; i++)
        arr[i] = i + 1;

    // Display the original array
    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Insert a new element (e.g., 50) at position 5
    x = 50;
    pos = 5;
    n++; // Increase the array size
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;

    // Display the modified array after insertion
    printf("Modified array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Delete the element at position 5
    for (i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--; // Decrease the array size

    // Display the array after deletion
    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
