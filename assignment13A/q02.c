#include <stdio.h>

int main()
{
    int x, original;
    int *p;

    printf("Enter an integer: ");
    scanf("%d", &x);

    original = x;

    p = &x;

    *p = *p + 10;

    printf("Original value = %d\n", original);
    printf("Modified value = %d\n", x);

    return 0;
}