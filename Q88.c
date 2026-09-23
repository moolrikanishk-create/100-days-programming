//Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;
    int length;

    i = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    length = strlen(str);

    if (str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length = length - 1;
    }

    while (i < length)
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }
        i = i + 1;
    }

    printf("Result: %s\n", str);

    return 0;
}
