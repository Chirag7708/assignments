#include <stdio.h>
 void display()
 {
    auto int x = 10;   
    printf("outside inner block = %d\n", x);
  {
    auto int x = 20;
    printf("inside inner block = %d\n", x);
  }
  printf("outside inner block = %d\n", x);
}
int main()
{
    display();
    return 0;
}   
