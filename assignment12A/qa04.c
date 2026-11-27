#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks[3];
    char grade;
};

void displayStudent(struct Student s)
{
    printf("\nRoll Number: %d", s.roll);
    printf("\nName: %s", s.name);
    printf("\nMarks: %.2f %.2f %.2f",
           s.marks[0], s.marks[1], s.marks[2]);
    printf("\nGrade: %c\n", s.grade);
}

float totalMarks(struct Student s)
{
    return s.marks[0] + s.marks[1] + s.marks[2];
}

void updateGrade(struct Student *s, char newGrade)
{
    s->grade = newGrade;
}

int main()
{
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter marks in 3 subjects: ");
    scanf("%f %f %f",
          &s.marks[0], &s.marks[1], &s.marks[2]);

    printf("Enter grade: ");
    scanf(" %c", &s.grade);

    displayStudent(s);

    printf("\nTotal Marks = %.2f\n", totalMarks(s));

    updateGrade(&s, 'A');

    printf("\nAfter updating grade:");
    displayStudent(s);

    return 0;
}
