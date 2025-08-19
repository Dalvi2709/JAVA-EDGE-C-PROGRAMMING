// 1) Write a program to find the maximum and minimum element in an array.

#include <stdio.h>

void maxmin(int arr[], int size, int *max, int *min)
{
     *max = arr[0];
     *min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }

        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }

}

int main()
{
    int arr [] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maximum,minimum;
    maxmin(arr, size, &maximum, &minimum);

    printf("Maximum Element is : %d\n",maximum);
    printf("Minimum Element is : %d\n",minimum);

    return 0;

}