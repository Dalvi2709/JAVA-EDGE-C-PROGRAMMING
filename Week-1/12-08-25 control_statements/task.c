#include <stdio.h>
#include <conio.h>

int main (){

    int number , choise;
    printf("\n Enter Your Number : \n");
    scanf("%d",&number);
    printf("1. Check Even Or Odd \n 2. Check Positive Or Negative\n");
    scanf("%d",&choise);

    switch (choise)
    {
    case 1:
      (number % 2 == 0) ? printf("Even") : printf("Odd"); //ternary oprators 
        break;
    case 2:
      (number >= 0) ? printf("Positive") : printf("Negative"); //ternary oprators 
        break;
    
    default:
        break;
    }
    return 0;
    
}