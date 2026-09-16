//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main(void)
{
    int matrix[10][10];
    int n;
    int i;
    int j;
    int sum;

    n = 0;
    i = 0;
    j = 0;
    sum = 0;

    printf("Enter the order of the square matrix (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements row by row:\n");
    for (i = 0; i < n; i = i + 1)
    {
        for (j = 0; j < n; j = j + 1)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < n; i = i + 1)
    {
        for (j = 0; j < n; j = j + 1)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < n; i = i + 1)
    {
        sum = sum + matrix[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
