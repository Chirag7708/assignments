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