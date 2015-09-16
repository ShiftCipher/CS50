#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    float v = 23.8;
    int w;
    float x;

    w = round(v);
    x = fabs(w - v - 1);
    
    if (x > 1)
    {
        x--;
        
    }
    else
    {
        w--;
    }
    
    printf("%i\n", w);
    printf("%.2f\n", x);

}
