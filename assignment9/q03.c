#include <stdio.h>

int sumDigits(int n)
{
    int sum = 0;

    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int countDigits(int n)
{
    int count = 0;

    if (n == 0)
        return 1;

    while (n != 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int reverseNumber(int n)
{
    int rev = 0;

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    return rev;
}

int palindrome(int n)
{
    if (n == reverseNumber(n))
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumDigits(n));
    printf("Number of digits = %d\n", countDigits(n));
    printf("Reverse = %d\n", reverseNumber(n));

    if (palindrome(n))
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    return 0;
}