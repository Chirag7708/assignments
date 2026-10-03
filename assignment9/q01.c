#include <stdio.h>

int add(int, int);
int main()
{
    int m, n, r;
    scanf("%d %d", &m, &n);
     r = add(m,n);
    printf("%d", r);
    printf("%d", add(m,n));
    return 0;
}
int add(int a, int b)
{
    int result;
    result= a + b;
    return result;
}
