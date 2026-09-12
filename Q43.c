//Write a program to check if a number is a strong number.
#include <stdio.h>

int main()
{
    int number;
    int originalNumber;
    int remainder;
    int digitFactorial;
    int i;
    int sumOfFactorials;

    number = 0;
    sumOfFactorials = 0;

    printf("Enter a number: ");
    scanf("%d", &number);


    originalNumber = number;


    while (number != 0)
    {
        remainder = number % 10;
        digitFactorial = 1;
        i = 1;


        while (i <= remainder)
        {
            digitFactorial = digitFactorial * i;
            i = i + 1;
        }

        sumOfFactorials = sumOfFactorials + digitFactorial;
        number = number / 10;
    }


    if (sumOfFactorials == originalNumber)
    {
        printf("%d is a strong number.\n", originalNumber);
    }
    else
    {
        printf("%d is not a strong number.\n", originalNumber);
    }

    return 0;
}
