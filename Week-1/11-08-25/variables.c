#include<stdio.h>  //headerfiles,Libraries-----standard input and output
#include<conio.h>  // console input and output both gives ready made functionalities

void main()
{  
    // variables is the name of memory location

    int age = 23;
    printf("Number = %d \n",age); // 23

    char ch = 'a';
    printf("Character is %c \n",ch); // a

    char name[] = "Roshan Ramchandra Dalvi"; 
    printf("String is %s \n", name); // Roshan Ramchandra Dalvi

    float marks = 82.40;
    printf("Floating Marks is %f \n",marks); // 82.400000
    printf("Floating Marks is %.f \n",marks); // 82
    printf("Floating Marks is %.2f \n",marks); // 82.40

    double contact = 7588329106;
    printf("%lf \n",contact); //7588329106.000000
    printf("%.lf",contact); //7588329106
    
}
