#include <stdio.h>

enum MenuChoice
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    EXIT
};

int main()
{
    int choice;
    float a, b;

    do
    {
        printf("\n1. Add");
        printf("\n2. Subtract");
        printf("\n3. Multiply");
        printf("\n4. Divide");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == EXIT)
        {
            printf("Exiting calculator...");
            break;
        }

        if (choice < ADD || choice > DIVIDE)
        {
            printf("Invalid choice\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice)
        {
            case ADD:
                printf("Result = %.2f\n", a + b);
                break;

            case SUBTRACT:
                printf("Result = %.2f\n", a - b);
                break;

            case MULTIPLY:
                printf("Result = %.2f\n", a * b);
                break;

            case DIVIDE:
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Cannot divide by zero\n");
                break;
        }

    } while (choice != EXIT);

    return 0;
}