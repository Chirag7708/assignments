#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char word[50];
    char *position;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter word to search: ");
    scanf("%s", word);

    position = strstr(sentence, word);

    if(position != NULL)
    {
        printf("Word found at position %d",
               (int)(position - sentence + 1));
    }
    else
    {
        printf("Word not found.");
    }

    return 0;
}