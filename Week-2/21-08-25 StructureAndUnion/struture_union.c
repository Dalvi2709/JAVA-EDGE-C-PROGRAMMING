#include <stdio.h>
#include <string.h>

// Declaring structure using variable method
struct student
{
    int rollno;
    char name[20];
} s1;

void main()
{
    // 1st method to get data and set data.
    struct student s1;
    // s1.rollno = 101;
    // strcpy(s1.name, "Roshan");

    // printf("%d\n", s1.rollno);
    // printf("%s\n", s1.name);

    // 2nd method to get data and set data.
    printf("Enter Rollno : ");
    scanf("%d\n", &s1.rollno);
    printf("Enter name : ");
    scanf("%s\n", &s1.name);

    printf("%d\n", s1.rollno);
    printf("%s\n", s1.name);
}