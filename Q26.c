// Write a program to print numbers from 1 to n

#include <stdio.h>

int main()
{
    int n;
    int i;

    n = 0;
    i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);


    while (i <= n)
    {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}
