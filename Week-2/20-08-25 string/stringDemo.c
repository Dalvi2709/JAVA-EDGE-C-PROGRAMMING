#include <stdio.h>

void main(){
    char str1 [30] = "Roshan Ramchandra Dalvi";  //literal initialization.
    char str2 [10] = {'R','o','s','h','a','n','\0'}; // character-by-character initialization.
    char str3 [10]; // empty declaration for later initialization/assingment.

    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%s\n",str3);
}