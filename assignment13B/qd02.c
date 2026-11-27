#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e;
    struct Employee *p;

    float newSalary;

    p = &e;

    printf("Enter Employee ID: ");
    scanf("%d", &p->id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", p->name);

    printf("Enter Salary: ");
    scanf("%f", &p->salary);

    printf("\nCurrent Salary = %.2f\n", p->salary);

    printf("Enter new salary: ");
    scanf("%f", &newSalary);

    p->salary = newSalary;

    printf("\nEmployee Details:\n");
    printf("ID = %d\n", p->id);
    printf("Name = %s\n", p->name);
    printf("Modified Salary = %.2f\n", p->salary);

    return 0;
}