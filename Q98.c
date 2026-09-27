//Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main()
{
    char name[100];
    int i;
    int len;
    int lastWordStart;

    printf("Enter full name: ");
    fgets(name, 100, stdin);

    len = 0;
    while (name[len] != '\0')
    {
        len = len + 1;
    }

    if (len > 0 && name[len - 1] == '\n')
    {
        name[len - 1] = '\0';
        len = len - 1;
    }

    lastWordStart = 0;
    i = 0;
    while (i < len)
    {
        if (name[i] == ' ' && i + 1 < len && name[i + 1] != ' ')
        {
            lastWordStart = i + 1;
        }
        i = i + 1;
    }

    printf("Result: ");

    if (len > 0)
    {
        printf("%c.", name[0]);
    }

    i = 1;
    while (i < lastWordStart)
    {
        if (name[i] == ' ' && i + 1 < lastWordStart && name[i + 1] != ' ')
        {
            printf(" %c.", name[i + 1]);
        }
        i = i + 1;
    }

    if (lastWordStart > 0)
    {
        printf(" ");
        i = lastWordStart;
        while (i < len)
        {
            printf("%c", name[i]);
            i = i + 1;
        }
    }

    printf("\n");

    return 0;
}
