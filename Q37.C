//Write a program to find the LCM of two numbers.
#include <stdio.h>

int gcd(int a, int b)
{

    while (b != 0)
    {
        int temp;
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int num1;
    int num2;
    int gcdValue;
    int lcmValue;

    num1 = 0;
    num2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);


    gcdValue = gcd(num1, num2);
    lcmValue = (num1 * num2) / gcdValue;

    printf("LCM of %d and %d is %d\n", num1, num2, lcmValue);

    return 0;
}
