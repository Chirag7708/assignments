#include <stdio.h>

enum Result
{
    FAIL,
    PASS,
    DISTINCTION
};

enum Result getResult(float average)
{
    if (average >= 75)
        return DISTINCTION;
    else if (average >= 40)
        return PASS;
    else
        return FAIL;
}

int main()
{
    float average;
    enum Result result;

    printf("Enter average marks: ");
    scanf("%f", &average);

    result = getResult(average);

    if (result == DISTINCTION)
        printf("Result = DISTINCTION");
    else if (result == PASS)
        printf("Result = PASS");
    else
        printf("Result = FAIL");

    printf("\nNumeric Value = %d", result);

    return 0;
}