#include <stdio.h>

int additioins(int num1, int num2)// this are parameters , this is formal values , num1 and num2 are local variable.
{
    int result;
    result = num1 + num2;
    // printf("Addition= %d" , result);
    return result;
}


void main(){

    int n1 , n2;
    printf("Enter Number 1 and Number 2: ");
    scanf("%d%d", &n1,&n2);
   // additioins(n1,n2);  // this are arguments ,this are actual value

    //*if function return the value then by the follwing way we can get that value
//    printf("%d", additioins(n1,n2));

   int r = additioins(n1,n2);
   printf("%d" ,r);

}