#include <stdio.h>

// Function to insert an element 'x' at position 'pos' in the array 'arr'
void insertElement(int arr[], int *n, int x, int pos) {
    // Shift elements from 'pos' to the right
    for (int i = *n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new element 'x' at position 'pos'
    arr[pos - 1] = x;
    (*n)++; // Increase the array size
}

// Function to delete an element at position 'pos' from the array 'arr'
void deleteElement(int arr[], int *n, int pos) {
    // Shift elements from 'pos' to the left
    for (int i = pos - 1; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--; // Decrease the array size
}

// Function to sort the array in ascending order using selection sort
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] with arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[100] = {0}; // Initialize an array of size 100
    int n = 11; // Initial size of the array

    // Populate the array with numbers 1 to 11
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insert a new element (e.g., 50) at position 5
    int x = 50;
    int pos = 5;
    insertElement(arr, &n, x, pos);

    printf("Array after inserting %d at position %d: ", x, pos);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Delete the element at position 6
    int deletePos = 6;
    deleteElement(arr, &n, deletePos);

    printf("Array after deleting element at position %d: ", deletePos);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort the modified array in ascending order
    sortArray(arr, n);

    printf("Sorted array in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
