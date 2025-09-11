#include <stdio.h>
#include <conio.h>
int main()
{
    int number,digit,sum=0;
    printf("Enter the number\n");
    scanf("%d",&number);

    while (number != 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    printf("\nAddition of digits = %d", sum);
    
    return 0;
}