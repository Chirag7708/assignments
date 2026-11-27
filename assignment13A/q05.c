#include <stdio.h>

void remove_duplicates(int *arr, int n,
                       int *result, int *new_size)
{
    int i, j, duplicate;

    *new_size = 0;

    for (i = 0; i < n; i++)
    {
        duplicate = 0;

        for (j = 0; j < *new_size; j++)
        {
            if (*(arr + i) == *(result + j))
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 0)
        {
            *(result + *new_size) = *(arr + i);
            (*new_size)++;
        }
    }
}

int main()
{
    int arr[100], result[100];
    int n, new_size;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    remove_duplicates(arr, n, result, &new_size);

    printf("\nOriginal Array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nArray after removing duplicates: ");

    for (i = 0; i < new_size; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\nNumber of distinct elements = %d\n", new_size);

    return 0;
}