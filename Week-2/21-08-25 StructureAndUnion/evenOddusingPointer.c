#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 10;
    int *p = &n;

    if (*p % 2 == 0)
    {
        printf("\n Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
