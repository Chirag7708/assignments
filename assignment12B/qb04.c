#include <stdio.h>

struct OrdinaryFlags
{
    unsigned int flag1;
    unsigned int flag2;
    unsigned int flag3;
    unsigned int flag4;
};

struct BitFlags
{
    unsigned int flag1 : 1;
    unsigned int flag2 : 1;
    unsigned int flag3 : 1;
    unsigned int flag4 : 1;
};

int main()
{
    printf("Size of ordinary structure = %zu bytes\n",
           sizeof(struct OrdinaryFlags));

    printf("Size of bit-field structure = %zu bytes\n",
           sizeof(struct BitFlags));

    return 0;
}