// Write a program to count the frequency of each element in an array.
#include <stdio.h>

// Function to count the frequency of each element in an array
void countElementFrequency(int arr[], int n) {
    // Create a visited array to keep track of elements whose frequencies are already counted
    int visited[n]; 
    for (int i = 0; i < n; i++) {
        visited[i] = 0; // Initialize all elements of visited array to 0 (not visited)
    }

    printf("Element frequencies:\n");
    for (int i = 0; i < n; i++) {
        // If the element has not been visited yet
        if (visited[i] == 0) {
            int count = 1; // Initialize count for the current element
            // Iterate through the rest of the array to find duplicates
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;       // Increment count if a duplicate is found
                    visited[j] = 1; // Mark the duplicate as visited
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
}

int main() {
    int arr[] = {10, 20, 10, 30, 20, 10, 40, 50, 30};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    countElementFrequency(arr, n); // Call the function to count frequencies

    return 0;
}