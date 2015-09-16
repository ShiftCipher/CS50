#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
/* Convert a input string in ASCII */
{
    if (argc != 2)
    {
    	return 1;
    }
    printf("The ASCII Value of  %s  is  %d.\n", argv[1], argv[1][0]);
    return 0;
}


    
