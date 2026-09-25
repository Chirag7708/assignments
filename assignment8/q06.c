#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Length of first string = %d\n", (int)strlen(str1));
    printf("Length of second string = %d\n", (int)strlen(str2));

    result = strcmp(str1, str2);

    if(result == 0)
        printf("Both strings are equal.");
    else if(result < 0)
        printf("%s comes first lexicographically.", str1);
    else
        printf("%s comes first lexicographically.", str2);

    return 0;
}