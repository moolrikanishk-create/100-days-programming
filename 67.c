//Insert an element in an array at a given position.
#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int pos;
    int value;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);


    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position.\n");
        return 0;
    }

    
    for (i = n - 1; i >= pos - 1; i = i - 1)
    {
        arr[i + 1] = arr[i];
    }


    arr[pos - 1] = value;
    n = n + 1;

    printf("Array after insertion: ");
    for (i = 0; i < n; i = i + 1)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
