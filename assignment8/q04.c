#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i = 0, length = 0;
    int palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(tolower(str[i]) != tolower(str[length - i - 1]))
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}