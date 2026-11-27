#include <stdio.h>

int linearSearch(int arr[], int n, int key)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int arr[100];
    int n, key, i, position;

    int (*search)(int[], int, int);

    search = linearSearch;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    position = search(arr, n, key);

    if (position == -1)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n", position + 1);

    return 0;
}