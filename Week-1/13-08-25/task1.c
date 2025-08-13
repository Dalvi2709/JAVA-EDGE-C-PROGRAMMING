#include <stdio.h>
#include <conio.h>

int main (){
   
   int start,end;

    printf("Enter Start number and end Number : ");
    scanf("%d%d",&start,&end);

    for (int i = start; i <= end; i++)
    {
        printf("%d"+" ",i);
    }
    
   return 0; 
}