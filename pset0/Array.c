#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
	do
	{
		int size = GetInt(); // Times for Prompt
		// string str = GetString();
	}
	while(size <= 0);

	int array[size]; 
	// String array = strlen(str);

	for (int i = 1; i <= size; i++)
	// for (int i = 0, array = strlen(str); i < array; i++)
	{
		printf("Array # %i Value: ", i);
		array[i] = GetInt(); // Assign to Array[i] one Value
		printf("Value: %i\n", array[i]); // Print the Array[i] Value
	}
}