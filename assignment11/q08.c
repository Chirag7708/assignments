#include <stdio.h>
extern int a;
int main()
{
    printf("number declared in other file = %d\n", a);
    return 0;
}
