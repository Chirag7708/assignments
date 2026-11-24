#include <stdio.h>
void callcount()
{
    static int count = 0; 
    count++;
     printf("Function called %d times\n", count);
    
}
int main()
{
    callcount();
    callcount();
    callcount();
    return 0;
}
