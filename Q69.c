//Find the second largest element in an array.
#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i;
    int largest;
    int second_largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", &arr[i]);
    }


    if (n < 2)
    {
        printf("Array must have at least 2 elements.\n");
        return 0;
    }

    largest = arr[0];
    second_largest = -1;

    if (arr[1] > largest)
    {
        second_largest = largest;
        largest = arr[1];
    }
    else
    {
        second_largest = arr[1];
    }

    for (i = 2; i < n; i = i + 1)
    {

        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    if (second_largest == largest)
    {
        printf("No distinct second largest element exists.\n");
    }
    else
    {
        printf("Second largest element is %d\n", second_largest);
    }

    return 0;
}
