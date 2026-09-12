//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main()
{
    int number;
    int originalNumber;
    int remainder;
    int digitCount;
    int temp;
    long sum;
    int power;
    int i;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;
    sum = 0;
    digitCount = 0;

    temp = number;
    while (temp != 0)
    {
        digitCount = digitCount + 1;
        temp = temp / 10;
    }


    temp = number;
    while (temp != 0)
    {
        remainder = temp % 10;


        power = 1;
        for (i = 0; i < digitCount; i = i + 1)
        {
            power = power * remainder;
        }

        sum = sum + power;
        temp = temp / 10;
    }


    if (sum == originalNumber)
    {
        printf("%d is an Armstrong number.\n", originalNumber);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}
