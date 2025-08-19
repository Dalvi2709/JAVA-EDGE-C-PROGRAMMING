// Write a program to search an element in an array.
#include <stdio.h>

int test(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            return i; // return index
        }
    }
    return -1; // if not found
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int search = 5;

    int index = test(arr, size, search);
    if (index != -1)
    {
        printf("Element is found at index is : %d\n", index);
    }
    else
    {
        printf("Element is not found");
    }

    return 0;
}
