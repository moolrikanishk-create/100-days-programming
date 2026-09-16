//Add two matrices.
#include <stdio.h>

#define ROWS 2
#define COLS 3

int main()
{
    int matrixA[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrixB[ROWS][COLS] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    int sum[ROWS][COLS];
    int i;
    int j;


    i = 0;
    while (i < ROWS)
    {
        j = 0;
        while (j < COLS)
        {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];

            j = j + 1;
        }

        i = i + 1;
    }

    /* Print the first matrix */
    printf("Matrix A:\n");
    i = 0;
    while (i < ROWS)
    {
        j = 0;
        while (j < COLS)
        {
            printf("%d ", matrixA[i][j]);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }


    printf("\nMatrix B:\n");
    i = 0;
    while (i < ROWS)
    {
        j = 0;
        while (j < COLS)
        {
            printf("%d ", matrixB[i][j]);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }


    printf("\nSum matrix:\n");
    i = 0;
    while (i < ROWS)
    {
        j = 0;
        while (j < COLS)
        {
            printf("%d ", sum[i][j]);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }

    return 0;
}
