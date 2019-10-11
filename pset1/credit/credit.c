#include <cs50.h>
#include <stdio.h>
#include <math.h>

bool check_valid(long number);

int main(void)
{
    long number = get_long("Number: ");

    if (number < 100000000000000)
    {
        printf("INVALID\n");
        return 0;
    }
    
    if (check_valid(number)) 
    {
        long start = number / 100000000000000; 
        switch (start)
        {
            case 3:
            case 34:
            case 37: 
                printf("AMEX\n");
                break;
            case 51:
            case 53:
            case 54:
            case 55: 
                printf("MASTERCARD\n");
                break;
            default: 
                printf("VISA\n");
        }
    }
    else 
    {
        printf("INVALID\n");
    }
}

bool check_valid(long number)
{
    bool mul = false;
    int digit, sum = 0;
    
    while (number > 0)
    {
        digit = number % 10;

        if (mul)
        {
            digit *= 2;
            sum += (digit % 10) + ((digit / 10) % 10);
        }
        else 
        {
            sum += digit;
        }
        number /= 10;
        mul = !mul;
    }
    printf("%ld\n", sum);
    return sum % 10 == 0;
}
