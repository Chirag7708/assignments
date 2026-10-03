#include <stdio.h>

int totalMarks(int a, int b, int c, int d, int e)
{
    return a + b + c + d + e;
}

float percentage(int total)
{
    return total / 5.0;
}

int checkPass(int a, int b, int c, int d, int e)
{
    if (a < 40 || b < 40 || c < 40 || d < 40 || e < 40)
        return 0;
    else
        return 1;
}

char grade(float p)
{
    if (p >= 90)
        return 'A';
    else if (p >= 80)
        return 'B';
    else if (p >= 70)
        return 'C';
    else if (p >= 60)
        return 'D';
    else
        return 'F';
}

int main()
{
    int a, b, c, d, e, total;
    float per;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = totalMarks(a, b, c, d, e);
    per = percentage(total);

    printf("Total = %d\n", total);
    printf("Percentage = %.2f%%\n", per);

    if (checkPass(a, b, c, d, e))
    {
        printf("Result = Pass\n");
        printf("Grade = %c\n", grade(per));
    }
    else
    {
        printf("Result = Fail\n");
        printf("Grade = F\n");
    }

    return 0;
}