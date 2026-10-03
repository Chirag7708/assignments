#include <stdio.h>

int analyse(int *a, int n, int *small, int *secondSmall,
            int *great, int *secondGreat)
{
    int i;
    int foundSmall = 0;
    int foundGreat = 0;

    *small = a[0];
    *great = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] < *small)
            *small = a[i];

        if (a[i] > *great)
            *great = a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] != *small)
        {
            if (!foundSmall || a[i] < *secondSmall)
            {
                *secondSmall = a[i];
                foundSmall = 1;
            }
        }

        if (a[i] != *great)
        {
            if (!foundGreat || a[i] > *secondGreat)
            {
                *secondGreat = a[i];
                foundGreat = 1;
            }
        }
    }

    if (foundSmall && foundGreat)
        return 1;
    else
        return 0;
}

int main()
{
    int a[100], n, i;
    int small, secondSmall;
    int great, secondGreat;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (analyse(a, n, &small, &secondSmall,
                &great, &secondGreat))
    {
        printf("Smallest = %d\n", small);
        printf("Second Smallest = %d\n", secondSmall);
        printf("Greatest = %d\n", great);
        printf("Second Greatest = %d\n", secondGreat);
    }
    else
    {
        printf("Fewer than two distinct values exist.\n");
    }

    return 0;
}