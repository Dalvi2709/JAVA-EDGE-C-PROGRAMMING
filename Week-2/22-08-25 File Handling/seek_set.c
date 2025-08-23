#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *p;
    p = fopen("myfile.txt","w");
    fputs("good morning",p);

    fseek(p,6,SEEK_SET);
    fputs("welcome",p);
    fclose(p);
    return 0;
}