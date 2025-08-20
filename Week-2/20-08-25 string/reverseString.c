// 6 Reverse a String without strrev()
#include <stdio.h>
#include <string.h>

void main()
{
    char str1[10] = "Roshan";
    char rev[10];
    int length = strlen(str1);
    int i,j;
    for ( j=0 , i = length-1; i >= 0; i--,j++)
    {
        rev[j] = str1[i];
    }

    printf("%s",rev);
    
}
