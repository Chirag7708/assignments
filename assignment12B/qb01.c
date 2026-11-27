#include <stdio.h>

struct Flags
{
    unsigned int isOn : 1;
    unsigned int isReady : 1;
};

int main()
{
    struct Flags f;
    int on, ready;

    printf("Enter isOn (0 or 1): ");
    scanf("%d", &on);

    printf("Enter isReady (0 or 1): ");
    scanf("%d", &ready);

    if ((on == 0 || on == 1) &&
        (ready == 0 || ready == 1))
    {
        f.isOn = on;
        f.isReady = ready;

        printf("isOn = %u\n", f.isOn);
        printf("isReady = %u\n", f.isReady);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}