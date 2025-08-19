// Write a program to remove duplicate elements from an array.
#include <stdio.h>

// Function to remove duplicates from a sorted array
// It modifies the original array and returns the new size
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n; // No duplicates if array is empty or has one element
    }

    // Use a temporary array to store unique elements
    int temp[n];
    int j = 0; // Index for the temporary array

    // Iterate through the original array
    for (int i = 0; i < n - 1; i++) {
        // If the current element is not equal to the next, it's unique
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }

    // Add the last element of the original array (it's always unique compared to the previous check)
    temp[j++] = arr[n - 1];

    // Copy the unique elements back to the original array
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    return j; // Return the new size of the array
}

int main() {
    int arr[] = {10, 20, 20, 30, 40, 40, 40, 50, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Remove duplicates using the function
    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}