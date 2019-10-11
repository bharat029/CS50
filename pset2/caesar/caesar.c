#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2) 
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (argv[1][i] < 48 || argv[1][i] > 57) 
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        
        int key = atoi(argv[1]);
        string plaintext = get_string("plaintext: ");
        
        printf("ciphertext: ");
        for (int i = 0; i < strlen(plaintext); i++) 
        {
            if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                printf("%c", (plaintext[i] + key - 'a') % 26 + 'a');
            }
            else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                printf("%c", (plaintext[i] + key - 'A') % 26 + 'A');
            }
            else 
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
        
        return 0;
    }
    else 
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
