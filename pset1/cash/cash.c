#include <cs50.h>
#include <stdio.h>
#include <math.h>

float get_owed(string p);

int main(void)
{
    float dollars = get_owed("Cash owed: ");
    int cents = round(dollars * 100);
    int count = 0;
    
    while (cents > 0)
    {
        // Check which is the biggest possible denomination that can be used and subtract it's vale
        if (cents >= 25)
        {
            cents -= 25;
        }
        else if (cents >= 10)
        {
            cents -= 10;
        }
        else if (cents >= 5)
        {
            cents -= 5;
        }
        else 
        {
            cents -= 1;
        }
        count++;
    }
    printf("%i\n", count);
}

// Take only possitive inputs
float get_owed(string p)
{
    float n;
    do
    {
        n = get_float("%s", p);
    } 
    while(n < 0);
    return n;
}
