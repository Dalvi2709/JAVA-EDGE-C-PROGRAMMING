#include <stdio.h>

int main (){

    int arr[3];
 
    printf("Enter the elements : \n");
    for (int i = 0; i < 3; i++)
    {
       scanf("\n%d",& arr[i]);
    }

    int sum = 0;
    // printf("Elements are : ");
    for (int i = 0; i < 3; i++)
    {
       sum += arr[i];
    }

     printf("\n Addition is : %d", sum);
     
    return 0;
}