#include <stdio.h>

int main() {
    int num, num1, num2, num3, j = 0, amount=1000;
    char name[500];
    char opr;

    printf("Enter number=");
    scanf("%d", &num);

    switch(num) {
    case 1:
        printf("Enter number for checking odd/even=");
        scanf("%d", &num1);
        if (num1 % 2 == 0)
            printf("%d is Even", num1);
        else
            printf("%d is Odd", num1);
        break;

    case 2:
        printf("Enter your name=");
        scanf("%s", name);
        printf("Your name is %s", name);
        break;

    case 3:
        printf("Enter number for printing table=");
        scanf("%d", &num1);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num1, i, (num1 * i));
        }
        break;

    case 4:
        printf("Squares from 1 to 10:");
        while (j < 10) {
            j++;
            printf("\n%d = %d", j, (j * j));
        }
        break;

    case 5:
        printf("Enter number=");
        scanf("%d", &num1);
        if (num1 < 0)
            printf("Negative number");
        else
            printf("Positive number");
        break;

    case 6:
        while (j < 10) {
            j++;
            printf("\nEnter your number=");
            scanf("%d", &num1);

            if (num1 < 50)
                printf("\nToo low");
            else if (num1 > 50)
                printf("\nToo high");
            else if (num1 == 50) {
                printf("\nYou win");
                printf("\nYou guessed in attempt %d", j);
                break;
            } else
                printf("\nError");

            printf("\nAttempt %d", j);
        }
        break;

    case 7:
        printf("\nEnter two numbers=");
        scanf("%d %d", &num1, &num2);
        if (num1 < num2)
            printf("%d is greater than %d", num2, num1);
        else if (num1 > num2)
            printf("%d is greater than %d", num1, num2);
        else
            printf("Both are equal");
        break;

    case 8:
        printf("\nEnter three numbers=");
        scanf("%d %d %d", &num1, &num2, &num3);
        if (num1 > num2 && num1 > num3)
            printf("%d is greater", num1);
        else if (num2 > num1 && num2 > num3)
            printf("%d is greater", num2);
        else if (num3 > num1 && num3 > num2)
            printf("%d is greater", num3);
        else
            printf("Invalid (numbers may be equal)");
        break;

    case 9:
        printf("\nEnter (+, -, /, *)=");
        scanf(" %c", &opr); // Space before %c skips newline
        printf("Enter two numbers=");
        scanf("%d %d", &num1, &num2);

        if (opr == '+')
            printf("Sum = %d", num1 + num2);
        else if (opr == '-')
            printf("Difference = %d", num1 - num2);
        else if (opr == '*')
            printf("Product = %d", num1 * num2);
        else if (opr == '/')
            printf("Quotient = %d", num1 / num2);
        else
            printf("Invalid operator");
        break;
     
   case 10:
        
        printf("welcome to atm simulation\n");
        printf("your current balance is 1000 rs\n");
        printf("For credit Enter 1\nFor debit Enter 2\nFor checking balance Enter 3\n");
        scanf("%d",&num1);

      switch(num1){
      case 1:
      printf("Enter credit amount=");
      scanf("%d",&num2);
      printf("\n%d is credited",num2);
      printf("\ncurrent balance is %d\n",(amount - num2));
       break;
       
      case 2:
      printf("Enter debit amount=");
      scanf("%d",&num2);
      printf("\n%d is debited",num2);
      printf("\ncurrent balance is %d",(amount + num2));
       break;
       
      case 3:
      printf("\ncurrent balance is %d",amount);
       break;
      
      default:
        printf("Error"); 
       }
        break;
        
    default:
        printf("Error");
    }

    return 0;
}