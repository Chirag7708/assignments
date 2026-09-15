#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    int a, b;

    printf("----- CALCULATOR -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 6)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
    }

    switch (choice)
    {
        case 1:
            printf("Result = %d\n", a + b);
            break;

        case 2:
            printf("Result = %d\n", a - b);
            break;

        case 3:
            printf("Result = %d\n", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Result = %.2f\n", (float)a / b);
            else
                printf("Division by zero is not possible.\n");
            break;

        case 5:
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Modulus by zero is not possible.\n");
            break;

        case 6:
            printf("Result = %.2f\n", pow(a, b));
            break;

        case 7:
            printf("Exiting calculator.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}