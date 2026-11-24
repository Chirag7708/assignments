#include <stdio.h>

extern int x;

void display();

int main()
{
    display();

    x = 50;

    display();

    return 0;
}