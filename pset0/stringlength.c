#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
	string s = GetString();

	int length = 0;

	while (s[length] != "\0"); // \0 = NULL in ASCII
	{
		length++;
	}

	printf("%i", length );
}