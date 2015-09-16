#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    if (argc == 2)
    {
        string s = GetString();
        char *key = argv[1];

        for (int i = 0, j = 0, l = strlen(s), m = strlen(argv[1]); i < l; i++)
        {
            if (isalpha(s[i]))
            {
                int move;

                if (islower(key[j]))
                {
                    move = (key[j] - 97);
                }
                if (isupper(key[j]))
                {
                    move = (key[j] - 65);
                }
                if (islower(s[i]))
                {
                    printf("%c", ((((s[i] - 97) + move) % 26) + 97));
                    j++;
                }
                if (isupper(s[i]))
                {
                    printf("%c", ((((s[i] - 65) + move) % 26) + 65));
                    j++;
                }
                if (j == m)
                {
                    j = 0;
                }
            }
            else
            {
                printf("%c", s[i]);
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

