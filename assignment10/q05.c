#include <stdio.h>

int binarySearch(int a[], int left, int right, int key)
{
    int mid;

    if (left > right)
        return -1;

    mid = (left + right) / 2;

    if (a[mid] == key)
        return mid;

    if (key < a[mid])
        return binarySearch(a, left, mid - 1, key);
    else
        return binarySearch(a, mid + 1, right, key);
}

int main()
{
    int a[100], n, i, key, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    position = binarySearch(a, 0, n - 1, key);

    if (position == -1)
        printf("Element not found.");
    else
        printf("Element found at position %d.", position + 1);

    return 0;
}