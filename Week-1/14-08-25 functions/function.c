#include <stdio.h>
 
void test();
void test1();


void test1(){
    printf("\n I am test1 function");
}

void test(){
    printf("\n I am test function");
}



void main(){
    test1();
    test();
}