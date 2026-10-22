#include <stdio.h>
#include <limits.h>

void secondLargest(int a[], int n, int index, int *largest, int *second)
{
    if (index == n)
        return;

    if (a[index] > *largest)
    {
        *second = *largest;
        *largest = a[index];
    }
    else if (a[index] > *second && a[index] != *largest)
    {
        *second = a[index];
    }

    secondLargest(a, n, index + 1, largest, second);
}

int main()
{
    int a[100], n, i;
    int largest = INT_MIN;
    int second = INT_MIN;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    secondLargest(a, n, 0, &largest, &second);

    if (second == INT_MIN)
        printf("Fewer than two distinct elements exist.");
    else
        printf("Second largest element = %d", second);

    return 0;
}