#include <stdio.h>

void swap(int a, int b){
     printf("before swapping number 1 : %d and number 2: is %d \n" , a , b);
     a = a + b;
     b = a - b;
     a = a - b;

     printf("After swapping number 1 : %d and number 2 is %d \n" , a , b);

}

void main(){

    swap(23,12);
}