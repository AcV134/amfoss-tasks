#include <cs50.h>
#include <stdio.h>
#include <math.h>

float change;
int cents;
int coins;
int quarter = 25;
int dime = 10;
int nickel = 5;
int penny = 1;

int main(void) 
{
    while (change < 0)
    {
        change = get_float("Changed Owed: ");
    }
    
    cents = round(change * 100);
  
    while (cents >= quarter)
    {
        cents -= quarter;
        coins++;
    }
    while (cents >= dime)
    {
        cents -= dime;
        coins++;
    }
    while (cents >= nickel)
    {
        cents -= nickel;
        coins++;
    }
    while (cents >= penny)
    {
        cents -= penny;
        coins++;
    }
    
    printf("%i \n", coins);
}
