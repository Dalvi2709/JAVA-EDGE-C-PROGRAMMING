#include<stdio.h>
#include<conio.h>
int main(){
// int n = 10;
// int *p = &n;
// printf("%d\n",n); // 10
// printf("%d\n",*p); // 10 
// printf("%d\n",p);  // garbage value // memory adderes

int a = 10, b=6 , temp;
int *a1 = &a, *b1=&b, *tem = &temp;
printf("Before : %d %d\n",a,b);
*tem = *a1;
*a1 = *b1;
*b1 = *tem;
printf("After : %d %d",a,b);

return 0;
}