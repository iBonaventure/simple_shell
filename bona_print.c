#include "shell.h"

void bona_print(const char *input)
{
	write(STDOUT_FILENO, input, strlen(input));
}
