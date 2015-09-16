#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
	string s = GetString();

	for (int i = 0, n = strlen(s); i < n; i++)
	{
		if (islower(s[i]))
		{
			printf("%c", toupper(s[i]));
		}
		else
		{
			printf("%c",s[i]);
		}
	}
	printf("\n");
	return 0;
}