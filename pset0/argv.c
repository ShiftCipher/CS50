int main(int argc, char* argv[])
{
	if (argc > 1)
    {
		string s = GetString();

        printf("STRING, %s\n", s);

        for (int i = 0; i < argc; i++) // For Argv Value
        {
            printf("ARGV %s\n", argv[i]); // Print Argv Name

            for (int j = 0, l = strlen(argv[j]); j < l - 1; j++) // For Argv Value Length
            {
                printf("%i\n", (int) argv[i][j]); // Print Argv Index
            }
        }
    }
}