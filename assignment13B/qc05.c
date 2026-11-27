#include <stdio.h>

int stringLength(char *str)
{
    int length = 0;

    while (*str != '\0')
    {
        length++;
        str++;
    }

    return length;
}

void stringCopy(char *source, char *destination)
{
    while (*source != '\0')
    {
        *destination = *source;

        source++;
        destination++;
    }

    *destination = '\0';
}

int stringCompare(char *str1, char *str2)
{
    while (*str1 != '\0' &&
           *str2 != '\0' &&
           *str1 == *str2)
    {
        str1++;
        str2++;
    }

    if (*str1 == *str2)
        return 0;
    else
        return 1;
}

int main()
{
    char str1[100], str2[100], copy[100];

    int (*lengthPtr)(char *);
    void (*copyPtr)(char *, char *);
    int (*comparePtr)(char *, char *);

    lengthPtr = stringLength;
    copyPtr = stringCopy;
    comparePtr = stringCompare;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    printf("\nLength of first string = %d\n",
           lengthPtr(str1));

    copyPtr(str1, copy);

    printf("Copied string = %s\n", copy);

    if (comparePtr(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}