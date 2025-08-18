// 1) Write a function void swap(int *a, int *b) that swaps two numbers using pointers.(Call by Reference)

#include <stdio.h>

void swap(int *a, int *b)
{
    printf("Before swapping a = %d , b = %d ", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("\n After swapping a = %d , b = %d ", *a, *b);
}

void main()
{
    int number1 = 10;
    int number2 = 20;

    swap(&number1, &number2);
}