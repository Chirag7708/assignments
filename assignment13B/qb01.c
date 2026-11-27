#include <stdio.h>

int main()
{
    char str[100];
    char *p;
    int length = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    p = str;

    while (*p != '\0')
    {
        length++;
        p++;
    }

    printf("Length of string = %d\n", length);

    return 0;
}