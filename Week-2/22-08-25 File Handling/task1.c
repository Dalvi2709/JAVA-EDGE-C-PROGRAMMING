#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp;
    char name[200];
    char city[200];
    printf("\nEnter Your Name : ");
    scanf("%s",&name);
    printf("\nEnter Your City : ");
    scanf("%s",&city);


    fp = fopen("mytask.txt", "w");
    fprintf(fp,"My name is %s and %s is my city",name,city);
    fclose(fp);
    return 0;
}