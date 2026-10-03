#include <stdio.h>

int evenOdd(int n)
{
    return n % 2 == 0;
}

int checkPrime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int checkPerfect(int n)
{
    int i, sum = 0;

    if (n <= 1)
        return 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (evenOdd(n))
        printf("Even\n");
    else
        printf("Odd\n");

    if (n > 0)
        printf("Positive\n");
    else if (n < 0)
        printf("Negative\n");
    else
        printf("Zero\n");

    if (checkPrime(n))
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    if (checkPerfect(n))
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");

    return 0;
}