#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) //25, 10, 5, 1 Coins
{
    float v;

    do
    {
        printf("Money Change: ");
        v = GetFloat();
    }
    while (v <= 0);
    
	// convert float to int
	int c = round(v * 100);

	// how many quarters can I use?
	int q = c / 25;
	c -= q *25;
	
	// how many dimmes can I use?
	int d = c / 10;
	c -= d *10;

	// how many nickles can I use?
	int n = c / 5;
	c -= n *5;

	// how many penies can I use?
	int p = c / 1;
	c -= p *1;

	// total number of coins used?
	int coins = q + n + d + p;
	
	printf("%d\n", coins);
	return 0;
}

    

    
