#include <stdio.h>

int main()
{
    int a[10][10];
    int m, n, i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("\nRow-wise sums:\n");

    for(i = 0; i < m; i++)
    {
        sum = 0;

        for(j = 0; j < n; j++)
            sum += a[i][j];

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    printf("\nColumn-wise sums:\n");

    for(j = 0; j < n; j++)
    {
        sum = 0;

        for(i = 0; i < m; i++)
            sum += a[i][j];

        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}