// 5 Copy One String to Another without strcpy()

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[10] = "Roshan";
    char str2[10];
    int i = 0;

    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    printf("%s", str2);
}
