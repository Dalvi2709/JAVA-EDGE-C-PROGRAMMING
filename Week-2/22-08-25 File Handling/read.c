#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *p;
    p = fopen("myfile.txt","r");

    char arr [200];
    while (fscanf(p,"%s",arr) != EOF)
    {
        printf("%s",arr);
    }
    fclose(p);
    return 0;
}