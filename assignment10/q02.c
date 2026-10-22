#include <stdio.h>
int fibb(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibb(n - 1) + fibb(n - 2);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n < 0)
    {
        n = -n;
    }
    printf("Fibonacci of %d is %d\n", n, fibb(n));
}
