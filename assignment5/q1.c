#include <stdio.h>

int main()
{
    int day, month, year;
    int maxDays;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if (year > 0)
    {
        if (month >= 1 && month <= 12)
        {
            if (month == 2)
            {
                if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                    maxDays = 29;
                else
                    maxDays = 28;
            }
            else
            {
                if (month == 4 || month == 6 || month == 9 || month == 11)
                    maxDays = 30;
                else
                    maxDays = 31;
            }

            if (day >= 1 && day <= maxDays)
                printf("The date is valid.\n");
            else
                printf("Invalid day.\n");
        }
        else
        {
            printf("Invalid month.\n");
        }
    }
    else
    {
        printf("Invalid year.\n");
    }

    return 0;
}