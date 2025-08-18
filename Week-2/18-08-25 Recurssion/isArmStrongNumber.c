// 4) Write a function int isArmstrong(int n) that checks whether a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;
    
    // count digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // calculate sum of powers
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
