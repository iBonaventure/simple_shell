#include "shell.h"

int main(void)
{
	char input[130];

	while(1)
	{
		prompt_display();
		take_command(input, sizeof(input));
		execute_prompt(input);
	}

	return 0;
}		
