// Write a program to reverse an array.
#include <stdio.h>

void reverse(int arr[], int size)
{

    for (int i = size-1; i >= 0; i--)
    {
       printf("%d ", arr[i]);
    }

}

int main()
{
    int arr [] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    reverse(arr,size);
    return 0;

}