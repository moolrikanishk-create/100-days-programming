//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main()
{
    int n;
    int i;
    double sum;
    double term;

    n = 0;
    sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);


    if (n >= 1)
    {
        sum = sum + 1.0;
    }


    i = 2;
    while (i <= n)
    {
        term = (double)(2 * i - 1) / (double)(2 * i);
        sum = sum + term;
        i = i + 1;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
