// 2) Write a recursive function int sumOfDigits(int n) that returns the sum of digits of a number.

#include <stdio.h>
int sum=0;
int sumOfDigits(int n){
     if (n<=0)
     {
        return 0;
     }else
     {
        return  sum =  n + sumOfDigits(n-1);
     }
     
     
}

void main(){
    int number;
    printf("Enter the Number for sum of digits : \n");
    scanf("%d",&number);

    printf("Addition is : %d",sumOfDigits(number));

}