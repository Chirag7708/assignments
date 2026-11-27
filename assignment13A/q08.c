#include <stdio.h>

void update_pointer(int **p, int *new_address)
{
    *p = new_address;
}

int main()
{
    int a = 10;
    int b = 20;

    int *p = &a;

    printf("Before update:\n");
    printf("*p = %d\n", *p);
    printf("p = %p\n", (void *)p);

    update_pointer(&p, &b);

    printf("\nAfter update:\n");
    printf("*p = %d\n", *p);
    printf("p = %p\n", (void *)p);

    return 0;
}