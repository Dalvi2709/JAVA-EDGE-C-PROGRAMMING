#include <stdio.h>

void test()
{
    int a = 2;
    static int b = 4;

    a = a + 1;
    b = b + 1; // static variable can not change the value memmory alocate at the time of declaration it cant be refresh
    printf(" \n %d %d", a, b);
}

void main()
{
    test();
    test();
    test();
}