#include <stdio.h>

enum State
{
    IDLE,
    COIN_INSERTED,
    DISPENSE,
    OUT_OF_STOCK
};

enum State nextState(enum State state, int command, int *stock)
{
    switch (state)
    {
        case IDLE:
            if (*stock == 0)
                return OUT_OF_STOCK;

            if (command == 1)
                return COIN_INSERTED;

            printf("Invalid transition\n");
            return IDLE;

        case COIN_INSERTED:
            if (command == 2)
            {
                (*stock)--;
                return DISPENSE;
            }

            printf("Invalid transition\n");
            return COIN_INSERTED;

        case DISPENSE:
            if (command == 3)
            {
                if (*stock == 0)
                    return OUT_OF_STOCK;
                else
                    return IDLE;
            }

            printf("Invalid transition\n");
            return DISPENSE;

        case OUT_OF_STOCK:
            if (command == 4)
            {
                *stock = 5;
                return IDLE;
            }

            printf("Machine is out of stock\n");
            return OUT_OF_STOCK;
    }

    return state;
}

void displayState(enum State state)
{
    switch (state)
    {
        case IDLE:
            printf("Current State: IDLE\n");
            break;

        case COIN_INSERTED:
            printf("Current State: COIN INSERTED\n");
            break;

        case DISPENSE:
            printf("Current State: DISPENSE\n");
            break;

        case OUT_OF_STOCK:
            printf("Current State: OUT OF STOCK\n");
            break;
    }
}

int main()
{
    enum State state = IDLE;
    int command;
    int stock = 3;

    while (1)
    {
        displayState(state);

        printf("\nStock = %d\n", stock);

        printf("1. Insert Coin\n");
        printf("2. Select Product\n");
        printf("3. Dispense Complete\n");
        printf("4. Refill\n");
        printf("5. Exit\n");

        printf("Enter command: ");
        scanf("%d", &command);

        if (command == 5)
            break;

        state = nextState(state, command, &stock);
    }

    return 0;
}