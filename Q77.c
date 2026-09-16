//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main(void)
{
    int matrix[10][10];
    int n;
    int i;
    int j;
    int isDistinct;

    n = 0;
    i = 0;
    j = 0;
    isDistinct = 1;

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

    printf("Diagonal elements: ");
    for (i = 0; i < n; i = i + 1)
    {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");


    for (i = 0; i < n; i = i + 1)
    {
        for (j = i + 1; j < n; j = j + 1)
        {
            
            if (matrix[i][i] == matrix[j][j])
            {
                isDistinct = 0;
                break;
            }
        }


        if (isDistinct == 0)
        {
            break;
        }
    }


    if (isDistinct == 1)
    {
        printf("All diagonal elements are distinct.\n");
    }
    else
    {
        printf("Diagonal elements are not distinct.\n");
    }

    return 0;
}
