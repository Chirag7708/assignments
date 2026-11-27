#include <stdio.h>

int main()
{
    char source[100];
    char destination[100];

    char *p1;
    char *p2;

    printf("Enter a string: ");
    scanf(" %[^\n]", source);

    p1 = source;
    p2 = destination;

    while (*p1 != '\0')
    {
        *p2 = *p1;

        p1++;
        p2++;
    }

    *p2 = '\0';

    printf("Original string = %s\n", source);
    printf("Copied string = %s\n", destination);

    return 0;
}