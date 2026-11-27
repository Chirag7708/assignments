#include <stdio.h>

union Number
{
    int i;
    float f;
};

int main()
{
    union Number n[3];

    n[0].i = 10;
    n[1].i = 20;
    n[2].i = 30;

    printf("Integer values:\n");

    printf("%d\n", n[0].i);
    printf("%d\n", n[1].i);
    printf("%d\n", n[2].i);

    n[1].f = 5.5f;

    printf("\nSecond element after overwriting:\n");
    printf("%.2f\n", n[1].f);

    return 0;
}