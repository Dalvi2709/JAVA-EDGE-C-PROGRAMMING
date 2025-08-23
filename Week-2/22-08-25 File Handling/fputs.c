#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *p;
    p = fopen("myfile.txt","w");
    fputs("Welcome to file handling",p); // alternate part of fpintf
    fclose(p);
    return 0;
}