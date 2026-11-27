#include <stdio.h>

struct Device
{
    unsigned int power : 1;
    unsigned int mode : 2;
    unsigned int error : 1;
    unsigned int battery : 4;
};

int main()
{
    struct Device d;
    int power, mode, error, battery;

    printf("Enter power (0-1): ");
    scanf("%d", &power);

    printf("Enter mode (0-3): ");
    scanf("%d", &mode);

    printf("Enter error (0-1): ");
    scanf("%d", &error);

    printf("Enter battery (0-15): ");
    scanf("%d", &battery);

    if ((power >= 0 && power <= 1) &&
        (mode >= 0 && mode <= 3) &&
        (error >= 0 && error <= 1) &&
        (battery >= 0 && battery <= 15))
    {
        d.power = power;
        d.mode = mode;
        d.error = error;
        d.battery = battery;

        printf("\nDevice Status\n");
        printf("Power = %u\n", d.power);
        printf("Mode = %u\n", d.mode);
        printf("Error = %u\n", d.error);
        printf("Battery = %u\n", d.battery);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}