#include <stdio.h>
#include <cs50.h>

int number(void);
void bricks(int h);

int main(void)
{
    int h = number(); //Get Height
    bricks(h); //Put Height
    return 0;
}

int number(void)
/* Return a positive int by user input */
{
    int h;
    do
    {
        printf("Piramide Height Beteween 1 and 23: ");
        h = GetInt();
    }
    while (h < 0 || h > 23);
    return h;
}

void bricks(int h) //Height
/* Return a char pattern stair using a int like the number of steps */
{
    for (int l = 1; l <= h; l++) // Lines
    {
        
        for (int s = h - l; s >= 1; s--) // Spaces
        {
            printf(" ");
        }
        
        for (int t = 0; t <= l; t++) // Bricks   
        {
            printf("#");
        }
        printf("\n");
    }          
}  


