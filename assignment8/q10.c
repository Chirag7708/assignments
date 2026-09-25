#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char *word;
    int count = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    word = strtok(sentence, " \n");

    while(word != NULL)
    {
        printf("%s\n", word);

        count++;

        word = strtok(NULL, " \n");
    }

    printf("Total number of words = %d", count);

    return 0;
}