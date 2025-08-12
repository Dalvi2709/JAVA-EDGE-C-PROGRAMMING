#include <stdio.h>
#include <conio.h>

int main (){
       int num;
       printf("Enter the Number \n");
       scanf("%d", &num);      // input from user
      (num % 2 == 0) ? printf("Even") : printf("Odd"); //ternary oprators 


       //printf("%d\n",num);    // input number
       //printf("%d\n",&num);   // %u also used to print the input address

    char name[100],city[100];  // if the datatypes is similar use in this order
    printf("\nEnter your name and city");
    scanf("%s%s",&name,&city);
    printf("\nmy name is %s and i am from %s city.",name,city);
    return 0;
}