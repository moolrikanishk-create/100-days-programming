//Delete an element from an array.
#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int pos;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position.\n");
        return 0;
    }

    for (i = pos - 1; i < n - 1; i = i + 1)
    {
        arr[i] = arr[i + 1];
    }

    n = n - 1;

    printf("Array after deletion: ");
    for (i = 0; i < n; i = i + 1)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
