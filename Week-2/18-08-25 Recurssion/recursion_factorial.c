#include <stdio.h>

int num = 5;
int factorial = 1;

//  With Loops
void test1()
{

    for (int i = 5; i >= 1; i--)
    {
        factorial = factorial * i;
    }

    printf("factorial of %d is : %d ", num, factorial);
}

//  With Recurrion
int test2(int num) //5
{
    if (num == 0 || num == 1)
    {
       return 1;
    }else
    {
        return num * test2(num-1);  
    }
}

int main()
{
    // test1();
    test2(1);
    printf("factorial of %d is : %d ", num, test2(5));

    return 0;
}