//  Find Length of a String without strlen()

#include <stdio.h>
#include <string.h>

void main(){
    char str [] = "Roshan";
    int length = 0, i = 0;

    while (str[i] != '\0')
    {
       length++;
        i++;
    }
    
    printf("Length is : %d ",length);
    
}