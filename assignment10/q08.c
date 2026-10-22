#include <stdio.h>

int multiplyElement(int a[][10], int b[][10], int i, int j, int k, int c1)
{
    if (k == c1)
        return 0;

    return a[i][k] * b[k][j] +
           multiplyElement(a, b, i, j, k + 1, c1);
}

void multiplyMatrix(int a[][10], int b[][10], int result[][10],
                    int i, int j, int r1, int c1, int c2)
{
    if (i == r1)
        return;

    if (j == c2)
    {
        multiplyMatrix(a, b, result, i + 1, 0, r1, c1, c2);
        return;
    }

    result[i][j] = multiplyElement(a, b, i, j, 0, c1);

    multiplyMatrix(a, b, result, i, j + 1, r1, c1, c2);
}

int main()
{
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;
    int i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    printf("Enter elements of first matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    multiplyMatrix(a, b, result, 0, 0, r1, c1, c2);

    printf("Resultant matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}