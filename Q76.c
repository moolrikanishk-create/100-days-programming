//Check if a matrix is symmetric.
#include <stdio.h>

#define SIZE 3

int main()
{
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };

    int isSymmetric;
    int i;
    int j;

    isSymmetric = 1;
    i = 0;
    while (i < SIZE)
    {
        j = 0;
        while (j < SIZE)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
            }

            j = j + 1;
        }

        i = i + 1;
    }

    printf("Matrix:\n");
    i = 0;
    while (i < SIZE)
    {
        j = 0;
        while (j < SIZE)
        {
            printf("%d ", matrix[i][j]);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }

    if (isSymmetric == 1)
    {
        printf("\nThe matrix is symmetric.\n");
    }
    else
    {
        printf("\nThe matrix is not symmetric.\n");
    }

    return 0;
}
