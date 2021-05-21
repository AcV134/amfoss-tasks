#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int shift(char c);

string err = "Usage: ./vigenere keyword";

int main(int argc, string argv[])
{
    if (argc == 2) 
    {
        string k = argv[1];
        int k_length = strlen(k);
        for (int i = 0; i < strlen(k); i++) 
        {
            if (!isalpha(k[i]))
            {
                printf("%s", err);
                return 1;
            }
        }
        string text = get_string("plaintext: ");
        int text_length = strlen(text);
        char ciphered[text_length];
        printf("ciphertext: ");
        for (int i = 0, j = 0; i < text_length; i++)
        {
            int key = shift(k[j]);
            if (isupper(text[i]))
            {
                ciphered[i] = (text[i] + key - 65) % 26 + 65;
                j = (j + 1) % k_length;
            }
            else if (islower(text[i]))
            {
                ciphered[i] = (text[i] + key - 97) % 26 + 97;
                j = (j + 1) % k_length;
            }
            else 
            {   
                ciphered[i] = text[i];
            } 
            printf("%c", ciphered[i]); 
        }
        printf("\n");
        return 0;
    } 
    else 
    {
        printf("%s", err);
        return 1;
    }
}

int shift(char c)
{
    if (isupper(c))
    {
        c -= 65;
    }
    if (islower(c))
    {
        c -= 97;
    }
    return c;
}
