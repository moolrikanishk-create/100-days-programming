//Write a program to print all factors of a given number.
#include <stdio.h>

int main()
{
    int n;
    int i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    i = 1;
    while (i <= n)
    {
        /* Check if i divides n exactly (remainder is zero) */
        if (n % i == 0)
        {
            printf("%d ", i);
        }
        i = i + 1;
    }

    printf("\n");

    return 0;
}
