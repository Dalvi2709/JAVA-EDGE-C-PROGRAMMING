#include <stdio.h>
#include <conio.h>

int main (){

    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        printf("%d",i);
       if (i< 10)
       {
        printf("-");
       }   
    }
    return 0;
}