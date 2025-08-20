#include <stdio.h>
#include <string.h>

int main()
{
    char str1 [10] = "hi"; 
    char str2 [10] = " hello"; 
    char str3 [10] = " welcome"; 
    char str4 [15] = " good morning";
    

    strcat(str1,str2);
    strcat(str1,str3);
    strcat(str1,str4);
    
    printf("%s\n",str1);
    
    return 0;
}