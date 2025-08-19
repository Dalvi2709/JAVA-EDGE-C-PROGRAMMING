#include <stdio.h>

int main (){

    int arr[3];
 
    printf("Enter the elements : \n");
    for (int i = 0; i < 3; i++)
    {
       scanf("\n%d",& arr[i]);
    }

   
     printf("\n Elements are : ");
    for (int i = 0; i < 3; i++)
    {
      printf("\n %d",arr[i]);
    }

    int temp;
    temp  = arr[0];
    arr[0] = arr[2];
    arr[2] = temp;

      printf(" \n After swapping Elements are : ");
    for (int i = 0; i < 3; i++)
    {
       printf("\n %d",arr[i]);
    }

     
    return 0;
}