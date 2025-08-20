// 1 Write a program to check whether a given string is a palindrome.
//    eg. madam
#include <stdio.h>
#include <string.h>

int main()
{
    char originalString[10] = "madam";
    char reveseString[10];

    strcpy(reveseString, originalString);
    strrev(reveseString);

    if (strcmp(originalString, reveseString) == 0)
    {
        printf("palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}