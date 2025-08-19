#include <stdio.h>

int main (){

    int arr[3];
 
    printf("Enter the elements : \n");
    for (int i = 0; i < 3; i++)
    {
       scanf("\n%d",& arr[i]);
    }
    printf("Elements are : ");
    for (int i = 0; i < 3; i++)
    {
        printf("\n %d", arr[i]);
    }
     
    return 0;
}