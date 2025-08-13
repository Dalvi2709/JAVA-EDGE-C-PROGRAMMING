#include <stdio.h>
#include <conio.h>

int main()
{
    // Task 1 find greater Number Between Two variables.

    // int number1, number2;
    // printf("Enter Number 1 : \n");
    // scanf("%d", &number1);
    // printf("Enter Number 2 : \n");
    // scanf("%d", &number2);
    // if (number1 == number2)
    // {
    //     printf("Numbers are Equal");
    // }
    // else
    // {
    //     (number1 > number2) ? printf("largest Number is %d", number1) : printf("largest Number is %d", number2);
    // }

    // Task 2 find greater Number Between Three variables.
    // int number1, number2, number3;
    // printf("Enter Number 1 : \n");
    // scanf("%d", &number1);
    // printf("Enter Number 2 : \n");
    // scanf("%d", &number2);
    // printf("Enter Number 3 : \n");
    // scanf("%d", &number3);

    // if (number1 >= number2 && number1 >= number3)
    // {
    //     if (number1 == number2 && number1 == number3)
    //     {
    //         printf("All numbers are equal");
    //     }
    //     else
    //     {
    //         printf("largest Number is %d", number1);
    //     }
    // }
    // else if (number2 >= number3)
    // {
    //     printf("largest Number is %d", number2);
    // }
    // else
    // {
    //     printf("largest Number is %d", number3);
    // }

    // Task 3 check given char is uppercase,digit,lowercase,speacialchar

    // char input;
    // printf("Enter the character : ");
    // scanf("%c",&input);

    // if (input >= 'A' && input <= 'Z')
    // {
    //     printf("The Given %c is Uppercase",input);
    // }else if (input >= 'a' && input <= 'z')
    // {
    //     printf("The Given %c is Lowercase",input);
    // }else if (input >= '0' && input <= '9')
    // {
    //     printf("The Given %c is Number",input); 
    // }else
    // {
    //     printf("The Given %c is Speacialcharacter",input);
    // }

    // Task 4 ATM
    int choice;
    float balance = 1000.0, amount;

    while (1) {
        printf("\n------ ATM Menu ------\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else if (amount <= 0) {
                    printf("Invalid amount!\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful. New balance: %.2f\n", balance);
                }
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid amount!\n");
                } else {
                    balance += amount;
                    printf("Deposit successful. New balance: %.2f\n", balance);
                }
                break;

            case 3:
                printf("Current balance: %.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using the ATM!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } 

    return 0;
}