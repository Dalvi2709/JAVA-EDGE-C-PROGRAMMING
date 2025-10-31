#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    (number % 2 == 0 ) ? printf("Even number") : printf("Odd number");
    return 0;
}
