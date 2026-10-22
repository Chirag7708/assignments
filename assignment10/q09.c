#include <stdio.h>

int columnSum(int a[][10], int rows, int row, int col)
{
    if (row == rows)
        return 0;

    return a[row][col] + columnSum(a, rows, row + 1, col);
}

int findMinColumn(int a[][10], int rows, int cols,
                  int col, int minCol, int minSum)
{
    int sum;

    if (col == cols)
        return minCol;

    sum = columnSum(a, rows, 0, col);

    if (sum < minSum)
        return findMinColumn(a, rows, cols,
                             col + 1, col, sum);
    else
        return findMinColumn(a, rows, cols,
                             col + 1, minCol, minSum);
}

int main()
{
    int a[10][10];
    int rows, cols, i, j;
    int minCol, firstSum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    firstSum = columnSum(a, rows, 0, 0);

    minCol = findMinColumn(a, rows, cols, 1, 0, firstSum);

    printf("Column with minimum sum = %d\n", minCol + 1);
    printf("Minimum sum = %d",
           columnSum(a, rows, 0, minCol));

    return 0;
}