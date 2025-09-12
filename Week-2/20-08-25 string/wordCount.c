#include <stdio.h>
#include <string.h>

int main ()
{
    char str [50] = "I am Roshan Ramchandra Dalvi";
    char words [20] = strtok(" ");

    int size = sizeof(words)/sizeof(words[0]);
    printf("%d",size);
}