//Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int spaceCount;
    int digitCount;
    int specialCount;
    int i;
    int length;

    spaceCount = 0;
    digitCount = 0;
    specialCount = 0;
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
            spaceCount = spaceCount + 1;
        }
        else if (isdigit(str[i]))
        {
            digitCount = digitCount + 1;
        }
        else if (isalpha(str[i]))
        {
            i = i + 1;
            continue;
        }
        else
        {
            specialCount = specialCount + 1;
        }
        i = i + 1;
    }

    printf("Spaces: %d\n", spaceCount);
    printf("Digits: %d\n", digitCount);
    printf("Special characters: %d\n", specialCount);

    return 0;
}
