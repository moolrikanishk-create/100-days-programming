//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>

char firstRepeating(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    int len;
    len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }

    char result;
    result = firstRepeating(str);

    if (result != '\0')
    {
        printf("First repeating lowercase alphabet: %c\n", result);
    }
    else
    {
        printf("No repeating lowercase alphabet found\n");
    }

    return 0;
}

char firstRepeating(char str[])
{
    int count[26];
    int k;
    k = 0;

    while (k < 26)
    {
        count[k] = 0;
        k = k + 1;
    }

    int i;
    i = 0;

    while (str[i] != '\0')
    {
        char c;
        c = str[i];

        if (c >= 'a' && c <= 'z')
        {
            int index;
            index = c - 'a';
            count[index] = count[index] + 1;
        }

        i = i + 1;
    }

    i = 0;

    while (str[i] != '\0')
    {
        char c;
        c = str[i];

        if (c >= 'a' && c <= 'z')
        {
            int index;
            index = c - 'a';

            if (count[index] > 1)
            {
                return c;
            }
        }

        i = i + 1;
    }

    return '\0';
}
