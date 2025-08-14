#include <stdio.h>


void swap(int a , int b){
    printf("before swapping number 1 : %d and number 2: is %d \n" , a , b);
    int temp = a;
    a = b;
    b = temp;

    printf("After swapping number 1 : %d and number 2 is %d \n" , a , b);
}
void main(){
 
    int n1 , n2;
    printf("Enter your number 1 and  number 2 : ");
    scanf("%d%d", &n1, &n2);
    swap(n1, n2);
}