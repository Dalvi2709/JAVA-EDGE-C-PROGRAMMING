#include <stdio.h>
#include <conio.h>
int main()
{
    int number,digit,rev=0;
    printf("Enter the number\n");
    scanf("%d",&number);

    while (number != 0)
    {
        digit = number % 10;
        rev = rev * 10 + digit;
        number = number / 10;
    }

    printf("\n Revers of number = %d", rev);
    
    return 0;
}