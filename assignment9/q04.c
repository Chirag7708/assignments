#include <stdio.h>

int gcd(int a, int b)
{
    int i, result = 1;

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            result = i;
    }

    return result;
}

int gcdThree(int a, int b, int c)
{
    return gcd(gcd(a, b), c);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int lcmThree(int a, int b, int c)
{
    return lcm(lcm(a, b), c);
}

int main()
{
    int a, b, c;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("GCD = %d\n", gcdThree(a, b, c));
    printf("LCM = %d\n", lcmThree(a, b, c));

    return 0;
}