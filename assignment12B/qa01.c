#include <stdio.h>

enum Day
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main()
{
    int choice;

    printf("Enter a number from 1 to 7: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case MONDAY:
            printf("Monday");
            break;

        case TUESDAY:
            printf("Tuesday");
            break;

        case WEDNESDAY:
            printf("Wednesday");
            break;

        case THURSDAY:
            printf("Thursday");
            break;

        case FRIDAY:
            printf("Friday");
            break;

        case SATURDAY:
            printf("Saturday");
            break;

        case SUNDAY:
            printf("Sunday");
            break;

        default:
            printf("Invalid input");
    }

    return 0;
}