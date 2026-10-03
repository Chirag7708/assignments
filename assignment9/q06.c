#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff, int *prod, float *quo)
{
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
    if (b != 0)
    {
        *quo = (float)a / b;
    }
}

int main()
{
    int num1, num2, sum, diff, prod;
    float quo;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    calculate(num1, num2, &sum, &diff, &prod, &quo);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    if (num2 != 0)
    {
        printf("Quotient: %.2f\n", quo);
    }
    else
    {
        printf("Quotient: Division by zero is not allowed.\n");
    }

    return 0;
}   
  