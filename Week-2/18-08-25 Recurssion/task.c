#include <stdio.h>

//  With Recurrion
int add(int num) //10
{
    if (num == 0)
    {
       return 0;
    }else
    {
        return num + add(num-1);  
    }
}

int main()
{
    printf("Addition is : %d ", add(1));
    return 0;
}