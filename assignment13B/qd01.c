#include <stdio.h>

struct Student
{
    float marks[3];
};

int main()
{
    struct Student s;
    struct Student *p;

    float total, average;
    char grade;

    p = &s;

    printf("Enter marks in three subjects: ");

    scanf("%f %f %f",
          &p->marks[0],
          &p->marks[1],
          &p->marks[2]);

    total = p->marks[0] +
            p->marks[1] +
            p->marks[2];

    average = total / 3;

    if (average >= 90)
        grade = 'A';
    else if (average >= 75)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\nTotal = %.2f\n", total);
    printf("Average = %.2f\n", average);
    printf("Grade = %c\n", grade);

    return 0;
}