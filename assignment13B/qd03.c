#include <stdio.h>

struct Product
{
    int code;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product products[10];
    struct Product *p[10];

    int n, i;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        p[i] = &products[i];

        printf("\nEnter Product %d details:\n", i + 1);

        printf("Product Code: ");
        scanf("%d", &p[i]->code);

        printf("Product Name: ");
        scanf(" %[^\n]", p[i]->name);

        printf("Quantity: ");
        scanf("%d", &p[i]->quantity);

        printf("Price: ");
        scanf("%f", &p[i]->price);
    }

    printf("\nProduct Details:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("Code = %d\n", p[i]->code);
        printf("Name = %s\n", p[i]->name);
        printf("Quantity = %d\n", p[i]->quantity);
        printf("Price = %.2f\n", p[i]->price);
    }

    return 0;
}