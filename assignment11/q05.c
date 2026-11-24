#include <stdio.h>

int generateID()
{
    static int id = 1000;

    id++;

    return id;
}

int main()
{
    printf("ID: %d\n", generateID());
    printf("ID: %d\n", generateID());
    printf("ID: %d\n", generateID());

    return 0;
}