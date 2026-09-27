//Print the initials of a name.
#include <stdio.h>

int main()
{
    char name[100];
    int i;
    int len;

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

    i = 0;
    printf("Initials: ");

    if (len > 0)
    {
        printf("%c.", name[0]);
    }

    i = 1;
    while (i < len)
    {
        if (name[i] == ' ' && i + 1 < len && name[i + 1] != ' ')
        {
            printf("%c.", name[i + 1]);
        }
        i = i + 1;
    }

    printf("\n");

    return 0;
}
