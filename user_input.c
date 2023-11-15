#include "shell.h"


void take_command(char *input, size_t size)
{
	if(fgets(input, size, stdin) == NULL)
	{
		if(feof(stdin))
		{
			bona_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			bona_print("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	input[strcspn(input, "\n")] = '\0';
}
