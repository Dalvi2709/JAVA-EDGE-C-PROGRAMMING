#include <stdio.h>

//  With Recurrion
int add(int num) //10
{
    if (num == 0 || num == 1)
    {
       return 1;
    }else
    {
        return num + add(num-1);  
    }
}

int main()
{
    add(10);
    printf("Addition is : %d ", add(10));
    return 0;
}