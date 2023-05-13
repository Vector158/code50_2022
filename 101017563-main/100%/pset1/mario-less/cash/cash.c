#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
// Ask user for Input. If input < 0, repeat function
{
    int cents;
    do
    {
    cents = get_int("Change owed: ") ;
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
//Define all coins as int's (cuz right now thats the standart way of storing data?!)
//Set all coin initial values to 0 (PC's always start counting from 0)
//Limit While function to not go below the value of the coin itself. Cuz we aint a bank
//End each function  to update the amount of coins and cents left
{
    // int cents / 25
    int quarters = 0;
    while ( cents >= 25)
    {
        cents = cents - 25;
        quarters++;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    // int cents / 10
    int dimes = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    // TODO
    int nickles = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        nickles++;
    }
    return nickles;
}

int calculate_pennies(int cents)
{
    // TODO
    int pennies = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        pennies++;
    }
    return pennies;
}
