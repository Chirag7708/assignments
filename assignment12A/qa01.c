#include <stdio.h>

struct student
{
    int ID;
    char name[25];
    float marks[3];

};
int main()
{
    struct student s;
    int i;
    float total = 0.0f , average;
    printf("student rollno:");
    scanf("%d", &s.ID);
    printf("student name:");
    scanf("%s",s.name);
    printf("marks in 3 subjects:");
    for(i = 0; i < 3; i++)
    {
        scanf("%f", &s.marks[i]);
        total = total + s.marks[i];
    }
    average = total/3.0f;
    printf("average marks = %.2f\n", average);
    if( average >= 90)
    {
        printf("student has above90%");
    }
    else
    {
        printf("student has below 90%");
    }
}
