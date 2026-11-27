#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    char *p1, *p2;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    p1 = str1;
    p2 = str2;

    while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
    {
        p1++;
        p2++;
    }

    if (*p1 == *p2)
        printf("Strings are equal\n");
    else if (*p1 > *p2)
        printf("First string is greater\n");
    else
        printf("Second string is greater\n");

    return 0;
}