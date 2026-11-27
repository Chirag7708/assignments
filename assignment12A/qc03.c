#include <stdio.h>

struct Employee
{
    int id;

    union
    {
        int hourly_rate;
        float monthly_salary;
    };
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Monthly Salary: ");
    scanf("%f", &e.monthly_salary);

    printf("\nEmployee ID = %d\n", e.id);
    printf("Monthly Salary = %.2f\n", e.monthly_salary);

    return 0;
}