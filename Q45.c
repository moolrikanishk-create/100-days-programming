//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main()
{
    int n;
    int i;
    double sum;
    double term;
    double numerator;
    double denominator;

    n = 0;
    sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);


    i = 1;
    while (i <= n)
    {
        numerator = 2 * i;
        denominator = 4 * i - 1;
        term = numerator / denominator;
        sum = sum + term;
        i = i + 1;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}x
