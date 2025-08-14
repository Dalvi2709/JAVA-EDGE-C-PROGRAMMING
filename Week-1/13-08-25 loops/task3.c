#include <stdio.h>

int main (){
    int number,digit,addition=0;
    printf("Enter the number : ");
    scanf("%d",&number);

    while (number != 0)
    {
        digit = number % 10;
        addition +=  digit;
        number /= 10;
    }
    
    printf("Addition is : %d",addition);
    return 0;   
}