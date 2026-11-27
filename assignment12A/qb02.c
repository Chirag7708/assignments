#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;

typedef struct
{
    int roll;
    char name[50];
    float cgpa;
    Date dob;
} Student;

void displayStudent(Student *s)
{
    printf("\nRoll Number: %d", s->roll);
    printf("\nName: %s", s->name);
    printf("\nCGPA: %.2f", s->cgpa);

    printf("\nDate of Birth: %02d/%02d/%d",
           s->dob.day,
           s->dob.month,
           s->dob.year);

    if (s->cgpa >= 8.5)
        printf("\nMerit Scholarship: Eligible\n");
    else
        printf("\nMerit Scholarship: Not Eligible\n");
}

int main()
{
    Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Student %d details\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);

        printf("Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d",
              &s[i].dob.day,
              &s[i].dob.month,
              &s[i].dob.year);
    }

    printf("\nStudent Details:\n");

    for (i = 0; i < n; i++)
    {
        displayStudent(&s[i]);
    }

    return 0;
}