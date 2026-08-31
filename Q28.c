//Write a program to print the product of even number from 1 to n.
#include <stdio.h>

int main()
{
    int n;
    int i;
    long product;

    n = 0;
    i = 0;
    product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);


    i = 1;
    while (i <= n)
    {
        
        if (i % 2 == 0)
        {
            product = product * i;
        }
        i = i + 1;
    }

    printf("Product of even numbers from 1 to %d = %ld\n", n, product);

    return 0;
}
