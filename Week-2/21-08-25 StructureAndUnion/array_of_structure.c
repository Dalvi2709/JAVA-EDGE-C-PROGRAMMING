#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[20];
} s[5];

int main()
{
    printf("\nEnter rollno and name : ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d%s", &s[i].rollno, &s[i].name);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Rollno : %d name : %s\n ", s[i].rollno, s[i].name);
    }

    return 0;
}