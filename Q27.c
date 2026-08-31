//Write a program to print the sum of the first n odd numbers
#include <stdio.h>

int main()
{
    int n;
    int i;
    int odd_number;
    int sum;

    n = 0;
    i = 0;
    odd_number = 0;
    sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);


    i = 1;
    while (i <= n)
    {
        odd_number = 2 * i - 1;
        sum = sum + odd_number;
        i = i + 1;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
