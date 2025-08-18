#include <stdio.h>

int a , b; // global variable
int num = 10;
static int age = 23;  // static variable
void add (int  a , int b){
    int c = a+b;   // Local Variable
    printf("%d \n",c);
    
    num = 50;     // redclaration can be done.
    printf("%d \n",num);
    
     // Can not redclare the static value.
     printf("%d \n",age);
  }

void add1 (){
    printf("%d",num);
  }
int main (){
  add(2,3);
  add1();
  return 0;
}