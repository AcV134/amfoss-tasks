#include <cs50.h>
#include <stdio.h>

int get_height(string prompt);
void pyramid(int height);

int main(int argc, string argv[])
{
    int height = get_height("Height: ");
    pyramid(height);
}


void pyramid(int rows)
{
    for (int i = 0; i < rows; i++)
    {

        for (int col = 0; col < rows * 2 + 2; col++)
        {    

            if (col + i < (rows - 1))
                printf(" ");

            else if ((col == rows || col == rows + 1))
                printf(" ");

            else if (col - i >= rows + 3)
                printf("");
            else
                printf("#");     
        }
        printf("\n");
    }
}


int get_height(string prompt)
{
    int n;   
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1 || n > 8);
    return n;
}
