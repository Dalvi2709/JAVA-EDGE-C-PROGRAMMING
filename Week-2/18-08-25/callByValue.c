#include <stdio.h>

void show (int num){
    printf(" \n Before Adding num = %d ",num); // 10
    num = num + 10;
    printf(" \n After Adding num = %d ",num); // 20
}

void main (){
    int a = 10;
    printf(" \n Before Adding a = %d ",a); //10

    show(a); // call By Value.
    printf(" \n After Adding num = %d ",a); //10
}
