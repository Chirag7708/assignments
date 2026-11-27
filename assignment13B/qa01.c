#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *p;
    int largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    p = arr;

    largest = *p;
    smallest = *p;

    for (i = 1; i < n; i++)
    {
        if (*(p + i) > largest)
            largest = *(p + i);

        if (*(p + i) < smallest)
            smallest = *(p + i);
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}