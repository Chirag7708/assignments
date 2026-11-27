#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data d;

    d.i = 25;
    printf("Integer = %d\n", d.i);

    d.f = 7.5f;
    printf("Float = %.2f\n", d.f);

    d.c = 'A';
    printf("Character = %c\n", d.c);

    printf("Size of union = %zu bytes\n", sizeof(d));

    return 0;
}