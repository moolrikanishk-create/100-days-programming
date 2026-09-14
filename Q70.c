//Rotate an array to the right by k positions.
#include <stdio.h>

int main()
{
    int arr[100];
    int temp[100];
    int n;
    int k;
    int i;
    int new_index;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < n; i = i + 1)
    {
        new_index = (i + k) % n;
        temp[new_index] = arr[i];
    }

    for (i = 0; i < n; i = i + 1)
    {
        arr[i] = temp[i];
    }

    printf("Array after rotating right by %d: ", k);
    for (i = 0; i < n; i = i + 1)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
