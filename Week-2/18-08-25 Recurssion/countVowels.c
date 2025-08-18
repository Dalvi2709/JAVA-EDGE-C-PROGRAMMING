// 3) Write a function int countVowels(char str[]) that counts the number of vowels (a, e, i, o, u) in a string.

#include <stdio.h>
int count = 0;
int countVowels(char str[])
{
    int count = 0, i = 0;
    while (str[i] != '\0') // C automatically puts a special character called the null character ('\0').
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Number of vowels: %d\n", countVowels(str));
    return 0;
}