#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
struct employee
{
    char name[3];
    int ID;
    float salary;
    struct date joiningDate;
};

int main()
{
struct employee e;
printf("enter eployee id , name and salary :");
scanf("%d %s %f",&e.ID,e.name,&e.salary);
printf("enter date of joining:  ");
scanf("%d %d %d",&e.joiningDate.day,&e.joiningDate.month,&e.joiningDate.year);

printf("employee id = %d\n",e.ID);
printf("employee name = %s\n",e.name);  
printf("employee salary = %.2f\n",e.salary);
printf("employee joining date = %d/%d/%d\n",e.joiningDate.day,e.joiningDate.month,e.joiningDate.year);
return 0;
}







