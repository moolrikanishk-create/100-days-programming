//Write a program to check if a number is a perfect number.
#include <stdio.h>

int main()
{
    int number;
    int divisor;
    int sum;

    number = 0;
    sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (divisor = 1; divisor < number; divisor = divisor + 1)
    {

        if (number % divisor == 0)
        {
            sum = sum + divisor;
        }
    }


    if (sum == number)
    {
        printf("%d is a perfect number\n", number);
    }
    else
    {
        printf("%d is not a perfect number\n", number);
    }

    return 0;
}
