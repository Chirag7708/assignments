#include <stdio.h>

int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}

int factorial(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;

    int (*functions[3])(int) =
    {
        square,
        cube,
        factorial
    };

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square = %d\n", functions[0](n));
    printf("Cube = %d\n", functions[1](n));
    printf("Factorial = %d\n", functions[2](n));

    return 0;
}