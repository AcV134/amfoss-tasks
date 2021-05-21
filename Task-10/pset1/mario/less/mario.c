#include <cs50.h>
#include <stdio.h>

int get_height_int(string prompt);
void pyramid(int h);

int main(void)
{
    int height = get_height_int("Height: ");
    pyramid(height);
}
void pyramid(int rows)
{
    for (int i = 0; i < rows; i++)
    {

	    for (int col = 0; col < rows; col++)
        {
 
            if (col < (rows - 1 - i))
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}

int get_height_int(string prompt)
{
    int n;   
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 2 || n > 8);
    return n;
}
