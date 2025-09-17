#include <stdio.h>


void show (int *num){
    printf(" \n Before Adding num = %d ",*num); // 10
    *num = *num + 10;
    printf(" \n After Adding num = %d ",*num); // 20
}

int main (){
    int a = 10;
    printf(" \n Before Adding a = %d ",a); //10

    show(&a); // call By refernce.
    printf(" \n After Adding a = %d ",a); //20   modified the value beacause we use Address 

    return 0;
}

