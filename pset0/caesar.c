#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		string s = GetString();
		
		int key = atoi(argv[1]);

		for (int i = 0, l = strlen(s); i < l; i++)
		{
		    if (s[i] < 65)
		    {
		        printf("%c", s[i]);
		    }
		    
		    if (isalpha(s[i]))
        	{
	            if (islower(s[i]))
	            {
	                printf("%c", ((((s[i] - 97) + key) % 26) + 97));
	            }
	            else
	            {
	                printf("%c", ((((s[i] - 65) + key) % 26) + 65));
	            }
        	}
		}
	}
	else
	{ 
	    printf("Bad Input Man\n");
	    return 1;
	}
	printf("\n");
	return 0;
}