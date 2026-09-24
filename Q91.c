//Remove all vowels from a string.
#include <stdio.h>
#include <string.h>

void removeVowels(char str[]);

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

    removeVowels(str);

    printf("String after removing vowels: %s\n", str);

    return 0;
}

void removeVowels(char str[])
{
    int i;
    i = 0;
    int j;
    j = 0;

    while (str[i] != '\0')
    {
        char c;
        c = str[i];

        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
        {
            str[j] = str[i];
            j = j + 1;
        }

        i = i + 1;
    }

    str[j] = '\0';
}

