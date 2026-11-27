#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols;
    int i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", (*(matrix + i) + j));
        }
    }

    printf("\nRow Sums:\n");

    for (i = 0; i < rows; i++)
    {
        sum = 0;

        for (j = 0; j < cols; j++)
        {
            sum = sum + *(*(matrix + i) + j);
        }

        printf("Row %d = %d\n", i + 1, sum);
    }

    printf("\nColumn Sums:\n");

    for (j = 0; j < cols; j++)
    {
        sum = 0;

        for (i = 0; i < rows; i++)
        {
            sum = sum + *(*(matrix + i) + j);
        }

        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}