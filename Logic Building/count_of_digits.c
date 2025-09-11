#include <stdio.h>
#include <conio.h>
int main()
{
    int number,digit,count=0;
    printf("Enter the number\n");
    scanf("%d",&number);

    while (number != 0)
    {
        digit = number % 10;
        count = count + 1;
        number = number / 10;
    }

    printf("\nCount of digits = %d", count);
    
    return 0;
}