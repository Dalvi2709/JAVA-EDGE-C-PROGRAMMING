#include <stdio.h>
#include <conio.h>
int main()
{
    int number1, number2, temp;
    printf("Enter the first number\n");
    scanf("%d", &number1);

    printf("Enter the second number\n");
    scanf("%d", &number2);

    printf("Before swapping first number = %d and second number = %d\n", number1, number2);
    // using third variable

    temp = number1;
    number1 = number2;
    number2 = temp;

    printf("After swapping first number = %d and second number = %d\n", number1, number2);

    // without using third variable

    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    printf("After swapping first number = %d and second number = %d", number1, number2);

    return 0;
}