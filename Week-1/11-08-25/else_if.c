#include <stdio.h>
#include <conio.h>

void main (){
    int usernum;
    int originalnum = 54;
    printf("\n Enter the Number Between 1 to 100 : ");
    scanf("%d",&usernum);


    if (usernum == originalnum)
    {
        printf("Number is match sucsessfully");
    }else if (usernum >= originalnum)
    {
        printf("Number is greater");
    }else if (usernum <= originalnum)
    {
        printf("Number is lesser");
    }else{
        printf("try again");
    }
    
    
}