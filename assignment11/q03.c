#include <stdio.h>
void demo()
{
    int a = 0;
    static int b = 5;
    a++;
    b++;   

    printf("%d\n %d\n", a ,b );


}
int main()
{
 demo ();
 return 0;
}
