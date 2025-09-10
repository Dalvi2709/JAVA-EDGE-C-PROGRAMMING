#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);

    (number >= 0 ) ? printf("Positive number") : printf("Negative number");
    return 0;
}