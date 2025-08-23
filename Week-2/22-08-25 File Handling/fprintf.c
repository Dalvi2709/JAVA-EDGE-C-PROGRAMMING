#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *p;
    p = fopen("myfile.txt","a");
    fprintf(p,"Hi hello good morning have a nice day");
    fclose(p);
    return 0;
}