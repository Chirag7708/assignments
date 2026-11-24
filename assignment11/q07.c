#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    register int i;
    register int sum = 0;

    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}