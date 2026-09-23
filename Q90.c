//Count frequency of a given character in a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char target;
    int i;
    int length;
    int count;

    i = 0;
    count = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    length = strlen(str);

    if (str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length = length - 1;
    }

    printf("Enter character to count: ");
    scanf("%c", &target);

    while (i < length)
    {
        if (str[i] == target)
        {
            count = count + 1;
        }
        i = i + 1;
    }

    printf("Frequency of '%c': %d\n", target, count);

    return 0;
}
