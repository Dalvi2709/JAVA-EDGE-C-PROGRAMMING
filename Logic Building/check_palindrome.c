#include <stdio.h>
#include <conio.h>
int main()
{
    int number, digit, rev = 0;
    printf("Enter the number\n");
    scanf("%d", &number);
    int res = number;
    while (number != 0)
    {
        digit = number % 10;
        rev = rev * 10 + digit;
        number = number / 10;
    }

    if (rev == res)
    {
        printf("Number is palindrom");
    }
    else
    {
        printf("Number is not palindrom");
    }

    return 0;
}