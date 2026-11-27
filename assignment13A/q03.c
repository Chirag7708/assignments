#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("Initial pointer:\n");
    printf("Address = %p, Value = %d\n", (void *)p, *p);

    p++;
    printf("\nAfter p++:\n");
    printf("Address = %p, Value = %d\n", (void *)p, *p);

    p--;
    printf("\nAfter p--:\n");
    printf("Address = %p, Value = %d\n", (void *)p, *p);

    p = p + 2;
    printf("\nAfter p + 2:\n");
    printf("Address = %p, Value = %d\n", (void *)p, *p);

    p = p - 1;
    printf("\nAfter p - 1:\n");
    printf("Address = %p, Value = %d\n", (void *)p, *p);

    return 0;
}