/*Write a program to print the following pattern:
*****
*****
*****
*****
******/
#include <stdio.h>

int main()
{
    int rows;
    int cols;
    int i;
    int j;

    rows = 5;
    cols = 5;


    i = 1;
    while (i <= rows)
    {

        j = 1;
        while (j <= cols)
        {
            printf("*");
            j = j + 1;
        }

        printf("\n");
        i = i + 1;
    }

    return 0;
}
