#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    printf("Enter height in metres: ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0)
    {
        printf("Invalid weight or height.\n");
    }
    else
    {
        bmi = weight / (height * height);

        printf("BMI = %.2f\n", bmi);

        if (bmi < 18.5)
            printf("Category: Underweight\n");

        else if (bmi < 25)
            printf("Category: Normal\n");

        else if (bmi < 30)
            printf("Category: Overweight\n");

        else if (bmi < 35)
            printf("Category: Obesity Class I\n");

        else if (bmi < 40)
            printf("Category: Obesity Class II\n");

        else
            printf("Category: Obesity Class III\n");
    }

    return 0;
}