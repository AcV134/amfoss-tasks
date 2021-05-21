#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{    
    
    if (argv[1]) 
    {

        int k = atoi(argv[1]);

        if (argc == 2 && k > 0)
        {
            string text = get_string("plaintext: ");
            int length = strlen(text);
            char res[length];
            printf("ciphertext: ");
            for (int i = 0; i < length; i++) 
            {
                if (isupper(text[i])) 
                {
                    res[i] = ((text[i] + k) - 65) % 26 + 65;
                }
                else if (islower(text[i]))
                {
                    res[i] = ((text[i] + k) - 97) % 26 + 97;
                }
                else 
                {
                    res[i] = text[i];
                }
                printf("%c", res[i]); 
            }
            printf("\n");
            return 0;
        } 
        else 
        {
            printf("Usage: ./caesar key");
            return 1;
        }
    } 
    else
    {
        printf("Usage: ./caesar key");
        return 1;
    }
}
