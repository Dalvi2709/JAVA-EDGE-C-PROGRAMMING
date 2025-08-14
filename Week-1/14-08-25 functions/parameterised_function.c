#include <stdio.h>
 
void evenodd(int num){ //here we declare one only  this are parameters
    if(num % 2 == 0){
        printf("\nEven Number");
    }else
    {
        printf("Odd Number");
    }
}

void main(){

    evenodd(7); // parameters , thats why we have write one only // arguments
    
}