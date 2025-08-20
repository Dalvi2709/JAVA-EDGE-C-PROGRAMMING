#include <stdio.h>
#include <string.h>

int main ()
{
    char str1 [10] = "Roshan"; 
    char str2 [10] = "Dalvi"; 
    char str3 [10];
    
    /*Find Length of string*/
    printf(" length : %d\n ", strlen(str1));  // return integer length of string.
   
    int length = strlen(str1);                // store in variable 2nd way.
    printf("length : %d\n ", length);


    /*Copy Sting in another string*/
    strcpy(str3,str1);                        // (Destination,Source) copy string
    printf("Copied String : %s\n",str3);  


    /*Concatination of two Strings*/
    //strcat(str1,str2);                        // stores concat strings in first str1
    printf(" Concatination : %s\n",str1);  


    /*Comparision of Two Strings*/
    // strcmp(str1,str2);                       // Comparision of strings if equals 
    printf(" Comparision : %d\n",strcmp("str1","str2"));  // it returns -1 if not equals
    

    if (strcmp(str1,str2) == 0)
    {
        printf("Equal\n");
    }else
    {
        printf(" Not Equal\n");
    }


    /*Reverse String*/
    printf(" Reverse : %s\n",strrev(str1));

    
    /*LowerCase and UpperCase*/
    printf(" LowerCase : %s\n",strlwr(str1));
    printf(" upperCase : %s\n",strupr(str1));
    
    
    /*Substring of string*/                               // takes 2 parameters and return substring
    char name [30] = "Roshan Ramchandra Dalvi";
    printf(" Substring : %s\n",strstr(name,"h"));
    
     return 0; 
}