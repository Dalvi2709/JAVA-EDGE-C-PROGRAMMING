#include <stdio.h>
#include <conio.h>
int main()
{
    
    /*2 numbers*/
    // int a, b;
    // printf("Enter two numbers\n");
    // scanf("%d%d", &a, &b);

    // (a > b) ? printf("greater number is %d", a) : printf("greater number is %d", b);

    /*3 numbers*/
    // int a, b, c;
    // printf("Enter three numbers\n");
    // scanf("%d%d%d", &a, &b, &c);

    // (a > b && a > c ) ? printf("greater number is %d", a) : (b > c) ? printf("greater number is %d", b) : printf("greater number is %d",c);

    /*4 numbers*/
    // int a, b, c, d;
    // printf("Enter four numbers\n");
    // scanf("%d%d%d%d", &a, &b, &c, &d);

    // (a > b && a > c && a > d ) ? printf("greater number is %d", a) : (b > c && b > d) ? printf("greater number is %d", b) : (c > d) ? printf("greater number is %d",c) : printf("greater number is %d",d);


     /*5 numbers*/
    int a, b, c, d, e;
    printf("Enter five numbers\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    (a > b && a > c && a > d && a > e ) ? printf("greater number is %d", a) : (b > c && b > d && b > e) ? printf("greater number is %d", b) : (c > d && c > e) ? printf("greater number is %d",c) : (d > e) ? printf("greater number is %d",d) : printf("greater number is %d", e);
    return 0;
}