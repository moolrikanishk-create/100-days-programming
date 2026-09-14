//Find the sum of all elements in a matrix.
#include <stdio.h>

int main()
{
    int matrix[50][50];
    int rows;
    int cols;
    int i;
    int j;
    int sum;

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

    sum = 0;


    for (i = 0; i < rows; i = i + 1)
    {
        for (j = 0; j < cols; j = j + 1)
        {
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}
