#include <stdio.h>
#include <conio.h>
int main()
{

    /*Table of any number*/
    // int number,i,result;
    // printf("Enter the number\n");
    // scanf("%d",&number);

    // for ( i = 1; i <= 10; i++)
    // {
    //     result = number * i;
    //     printf("%d * %d = %d\n", number,i,result);
    // }

    /*print even numbers or odd numbers or divisible by any number user given print them */
    int size, i;
    printf("Enter the size\n");
    scanf("%d", &size);
    printf("Even numbers\n");

    for (i = 1; i <= size; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}