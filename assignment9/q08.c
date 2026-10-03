#include <stdio.h>

void display(int *a, int n)
{
    int i;

    printf("Array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }

    printf("\n");
}

void insert(int *a, int *n, int pos, int value)
{
    int i;

    if (pos < 1 || pos > *n + 1)
    {
        printf("Invalid position\n");
        return;
    }

    for (i = *n; i >= pos; i--)
    {
        *(a + i) = *(a + i - 1);
    }

    *(a + pos - 1) = value;

    (*n)++;
}

void deleteElement(int *a, int *n, int pos, int *deleted)
{
    int i;

    if (pos < 1 || pos > *n)
    {
        printf("Invalid position\n");
        return;
    }

    *deleted = *(a + pos - 1);

    for (i = pos - 1; i < *n - 1; i++)
    {
        *(a + i) = *(a + i + 1);
    }

    (*n)--;

    printf("Deleted element = %d\n", *deleted);
}

int main()
{
    int a[100];
    int n, i, choice;
    int pos, value, deleted;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n1. Display");
        printf("\n2. Insert");
        printf("\n3. Delete");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                display(a, n);
                break;

            case 2:
                printf("Enter position: ");
                scanf("%d", &pos);

                printf("Enter value: ");
                scanf("%d", &value);

                insert(a, &n, pos, value);
                break;

            case 3:
                printf("Enter position: ");
                scanf("%d", &pos);

                deleteElement(a, &n, pos, &deleted);
                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}