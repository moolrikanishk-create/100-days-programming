//Write a program to find sum of digits of a number.
#include <stdio.h>

int main()
{
    int number;
    int originalNumber;
    int digit;
    int sum;

    number = 0;
    sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;


    while (number != 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    printf("Sum of digits of %d is %d\n", originalNumber, sum);

    return 0;
}
