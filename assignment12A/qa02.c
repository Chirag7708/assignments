#include <stdio.h>

struct student
{
    int ID;
    char name[25];
    float marks[3];

};
float calculate_average(struct student s) 
{
    float sum = 0.0f;
    int i;
    for(i = 0; i < 3; i++) {
        sum += s.marks[i];
    }
    return sum / 3.0f;
}


int main()
{
    struct student s[100];
    int i, j, n;
    float total = 0.0f , best , avg;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("roll no of the student");
        scanf("%d", &s[i].ID);
        printf("name of the student");  
        scanf("%s",s[i].name);
        for(j=0;j<3;j++)
        {
            scanf("%f",&s[i].marks[j]);
        }
    }
    best = calculate_average(s[0]);
    for(i=1; i<n ; i++)
    {
        if (calculate_average(s[i]) > best)
        {
            best = calculate_average(s[i]);
        }

    }
    for (i = 0; i < n; i++)
    {
        if (calculate_average(s[i]) == best)
        {
            printf("%d %s %.2f\n", s[i].ID, s[i].name, best);
        }
    }
}
    