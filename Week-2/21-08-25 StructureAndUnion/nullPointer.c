#include <stdio.h>
#include <conio.h>
int main()
{
    int *p = NULL;
    int num = 10;
    p = &num;

    if (p == '\0')
    {
        printf("NULL");
    }
    else
    {
        printf("%d", *p);
    }

    return 0;
}