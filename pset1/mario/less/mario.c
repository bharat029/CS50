#include <cs50.h>
#include <stdio.h>

int get_height(string p);

int main(void)
{
    int height = get_height("Height: ");
    // Outer loop is responsible for printing the whole pyramid
    for(int i = 0; i < height; i++)
    {
        for(int k = 0; k < (height - i - 1); k++)
        {
            printf(" ");
        }
        
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int get_height(string p)
{
    int n;
    do
    {
        n = get_int("%s", p);
    } while(n < 1 || n > 8);
    return n;
}
