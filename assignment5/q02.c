#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d, root1, root2;

    printf("Enter coefficient a: ");
    scanf("%f", &a);

    printf("Enter coefficient b: ");
    scanf("%f", &b);

    printf("Enter coefficient c: ");
    scanf("%f", &c);

    if (a == 0)
    {
        printf("Invalid input. a cannot be 0.\n");
    }
    else
    {
        d = b * b - 4 * a * c;

        printf("Discriminant = %.2f\n", d);

        if (d > 0)
        {
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);

            printf("Roots are real and distinct.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        }
        else if (d == 0)
        {
            root1 = -b / (2 * a);

            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
        }
        else
        {
            printf("Roots are imaginary.\n");
        }
    }

    return 0;
}