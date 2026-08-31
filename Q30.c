//Write a program to reverse a given number.
#include <stdio.h>

int main()
{
    int n;
    int digit;
    int reversed;

    n = 0;
    digit = 0;
    reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);


    while (n != 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
