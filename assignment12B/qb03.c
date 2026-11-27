#include <stdio.h>

struct Permission
{
    unsigned int read : 1;
    unsigned int write : 1;
    unsigned int execute : 1;
    unsigned int admin : 1;
};

int main()
{
    struct Permission p;
    int r, w, x, a;

    printf("Enter read permission (0/1): ");
    scanf("%d", &r);

    printf("Enter write permission (0/1): ");
    scanf("%d", &w);

    printf("Enter execute permission (0/1): ");
    scanf("%d", &x);

    printf("Enter admin permission (0/1): ");
    scanf("%d", &a);

    if ((r == 0 || r == 1) &&
        (w == 0 || w == 1) &&
        (x == 0 || x == 1) &&
        (a == 0 || a == 1))
    {
        p.read = r;
        p.write = w;
        p.execute = x;
        p.admin = a;

        printf("\nPermissions: ");

        printf("%c", p.read ? 'r' : '-');
        printf("%c", p.write ? 'w' : '-');
        printf("%c", p.execute ? 'x' : '-');
        printf("%c", p.admin ? 'A' : '-');
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}