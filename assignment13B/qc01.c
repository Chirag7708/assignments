#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;
    int (*p)(int, int);

    p = add;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Sum = %d\n", p(x, y));

    return 0;
}