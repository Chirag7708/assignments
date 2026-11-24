#include <stdio.h>

static int balance = 500;

void deposit(int amount)
{
    balance = balance + amount;
    
}

void withdraw(int amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance = balance - amount;
    }
    
    }
    void displayBalance()
    {
        printf("Current balance: %d\n", balance);
    }
    
