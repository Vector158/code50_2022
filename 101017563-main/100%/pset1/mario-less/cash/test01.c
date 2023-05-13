#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollar;
    do
    {
    dollar = get_float ("Please enter dollars: ");
    }
    while (dollar <= 0);
// (4-8) ask user input;only accept positive values
int cents = round (dollar*100);
int coins = 0;
//(10-11)have dollars converted to cents(need more precise units);
while (cents >= 25)
{
     cents = cents - 25;                                    // cents-= -25 [its the same function,just simpler]
    coins++;
}
//
while (cents >=10)
{
    cents = cents - 10;
    coins++;
}
//
while  (cents >= 5)
{
    cents = cents - 5;
    coins++;
}
//
while (cents >= 1)
{
    cents = cents - 1;
    coins++;
}

printf ("%i\n", coins);

}