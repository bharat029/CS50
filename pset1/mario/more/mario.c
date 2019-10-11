#include <cs50.h>
#include <stdio.h>

int get_height(string p);

int main(void)
{
    int height = get_height("Height: ");
    
    // This loop is responsible for printing the whole pyramid
    for(int i = 0; i < height; i++)
    {
        // This is responsible for printing the correct number of spaces per row to right align the pyramid
        for(int k = 0; k < (height - i - 1); k++)
        {
            printf(" ");
        }
        // This Loop is responsible for print the correct number of hashes per row for the right aligned half of the obsticle
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // Gap between the 
        printf("  ");
        // This Loop is responsible for print the correct number of hashes per row for the left aligned half of the obsticle
        for(int l = 0; l <= i; l++)
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
