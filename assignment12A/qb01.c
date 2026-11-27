#include <stdio.h>

typedef struct
{
    int roll;
    char name[50];
    float cgpa;
} Student;

int main()
{
    Student s[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter Student %d details\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    printf("\nStudent Details:\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nRoll Number: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nCGPA: %.2f\n", s[i].cgpa);
    }

    return 0;
}