#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
	string s = GetString();
	
	if (s[0] != 32)
	{ 
	    s[0] = toupper(s[0]);
	    printf("%c", s[0]);
	} 

	for (int i = 0, l = strlen(s); i < l; i++)
	{
		if (s[i] == 32)
		{
			s[i] = s[i + 1];
			printf("%c", toupper(s[i]));
		}
	}
	printf("\n");
	return 0;
}