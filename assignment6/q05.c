#include <stdio.h>

int main() {
    int lower, upper, i, j;
    int isPrime, count = 0;

    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers are: ");

    for (i = lower; i <= upper; i++)\
 {

        if (i < 2)
            continue;

        isPrime = 1; 

        for (j = 2; j <= i / 2;)
    {
                if (i % j == 0) {
                    isPrime = 0; 
                    break;
                }
                j++;
            }
          
            if (isPrime) {
                printf("%d ", i);
                count++;
            }
    return 0;
        }
    }


             