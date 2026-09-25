#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, j, count;
    int alreadyCounted;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        alreadyCounted = 0;

        for(j = 0; j < i; j++)
        {
            if(tolower(str[i]) == tolower(str[j]))
            {
                alreadyCounted = 1;
                break;
            }
        }

        if(alreadyCounted == 0)
        {
            count = 0;

            for(j = 0; str[j] != '\0' && str[j] != '\n'; j++)
            {
                if(tolower(str[i]) == tolower(str[j]))
                    count++;
            }

            printf("%c = %d\n", tolower(str[i]), count);
        }
    }

    return 0;
}