//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main()
{
    int n;
    int binary[32];
    int i;
    int count;

    n = 0;
    i = 0;
    count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    
    while (n != 0)
    {
        binary[count] = n % 2;
        n = n / 2;
        count = count + 1;
    }


    printf("Binary representation = ");
    i = count - 1;
    while (i >= 0)
    {
        printf("%d", binary[i]);
        i = i - 1;
    }
    printf("\n");

    return 0;
}
