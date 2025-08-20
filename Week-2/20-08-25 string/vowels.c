#include <stdio.h>
#include <string.h>

int main()
{
    char name[30] = "Roshan Ramchandra Dalvi";
    int i = 0 ,count = 0;
    while(name[i] != '\0')
    {
        if (name[i] == 'a' || name[i] == 'A' || name[i] == 'e' || name[i] == 'E' || name[i] == 'i' || name[i] == 'I' || name[i] == 'o' || name[i] == 'O' || name[i] == 'u' || name[i] == 'U')
        {
           count++;
        }
        i++;
        
    }
    printf("Count = %d\n",count);
    
    return 0;
}