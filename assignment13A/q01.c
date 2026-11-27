#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    p = &x;

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", (void *)&x);
    printf("Value stored in pointer p = %p\n", (void *)p);
    printf("Dereferenced value *p = %d\n", *p);

    return 0;
}