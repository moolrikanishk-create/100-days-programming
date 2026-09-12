//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main()
{
    int number;
    int originalNumber;
    int digit;
    int product;

    number = 0;
    product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;


    while (number != 0)
    {
        digit = number % 10;


        if (digit % 2 != 0)
        {
            product = product * digit;
        }

        number = number / 10;
    }
