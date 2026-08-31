//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main()
{
    int n;
    int i;
    long factorial;

    n = 0;
    i = 0;
    factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);


    i = 1;
    while (i <= n)
    {
        factorial = factorial * i;
        i = i + 1;
    }

    printf("Factorial of %d = %ld\n", n, factorial);

    return 0;
}
