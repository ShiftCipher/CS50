#include <stdio.h>
#include <cs50.h>

int main(void)
{
	string s = GetString();

	for (int i = 0, n = strlen(s); i < n; i++)
	{
		if (s[i] >= "a" && s[i] <= "z")
		{
			printf("%c", s[i] - ("a" - "A"));
		}
		else
		{
			printf("%c",s[i]);
		}
	}
	printf("\n");
	return 0;
}

