#include <cs50.h>
#include <stdio.h>
#include <string.h>

int shift(char inputChar);

int main(int argc, string argv[])
{
    if (argc == 2) 
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if ((argv[1][i] < 'a' || argv[1][i] > 'z') && (argv[1][i] < 'A' || argv[1][i] > 'Z'))
            {
                printf("Usage: ./vigenere keyword\n");
                return 1;
            }
        }
        
        string keyWord = argv[1];
        int lenKey = strlen(keyWord);
        string plaintext = get_string("plaintext: ");
        
        printf("ciphertext: ");
        for (int i = 0, j = 0; i < strlen(plaintext); i++) 
        {
            int key = shift(keyWord[j % lenKey]);
            int cipherChar = plaintext[i];

            if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                cipherChar -= 'a';
                cipherChar += key;
                cipherChar %= 26;
                cipherChar += 'a';
                j++;
            }
            else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                cipherChar -= 'A';
                cipherChar += key;
                cipherChar %= 26;
                cipherChar += 'A';
                j++;
            }
            printf("%c", cipherChar);
        }
        printf("\n");
        
        return 0;
    }
    else 
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
}

int shift(char inputChar) 
{
    if (keyWord[i] >= 'a' && keyWord[i] <= 'z') 
    {
        return inputChar - 'a';
    }
    else if (keyWord[i] >= 'A' && keyWord[i] <= 'Z')
    {
        return inputChar - 'A';
    }
}
