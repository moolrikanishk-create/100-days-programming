//Read and print a matrix.
#include <stdio.h>

int main()
{
    int matrix[50][50];
    int rows;
    int cols;
    int i;
    int j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter %d elements (row by row):\n", rows * cols);


    for (i = 0; i < rows; i = i + 1)
    {
        for (j = 0; j < cols; j = j + 1)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");


    for (i = 0; i < rows; i = i + 1)
    {
        for (j = 0; j < cols; j = j + 1)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
