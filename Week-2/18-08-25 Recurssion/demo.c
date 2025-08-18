#include <stdio.h>

int main (){

    int arr[3];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
 
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