//Write a program to check if a number is prime.
#include <stdio.h>

int main()
{
    int number;
    int i;
    int isPrime;

    printf("Enter a number: ");
    scanf("%d", &number);

    isPrime = 1;

    
    if (number <= 1)
    {
        isPrime = 0;
    }
    else
    {

        for (i = 2; i < number; i = i + 1)
        {
            if (number % i == 0)
            {
                isPrime = 0;
            }
        }
    }

    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
