//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main()
{
    int a;
    int b;
    int temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    /* Euclidean algorithm: repeatedly replace the larger number
       with the remainder of dividing it by the smaller number,
       until the remainder becomes zero */
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) = %d\n", a);

    return 0;
}
