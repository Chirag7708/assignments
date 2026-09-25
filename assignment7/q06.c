#include <stdio.h>

int main()
{
    int a[100], n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array before reversal:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    printf("\nArray after reversal:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}