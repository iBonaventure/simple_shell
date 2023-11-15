#include "shell.h"

void execute_prompt(const char *input)
{
	pid_t first_pid = fork();

	if(first_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if(first_pid == 0)
	{
		execlp(input, input, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}


#include "shell.h"


void execute_command(const char *input)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		bona_print("Error forking process,\n");
		exit(EXIT_FAILURE);
	}
	else if(child_pid == 0)
	{
		char *args[130];
		int args_count = 0;

		char *token = strtok((char *)input, " ");
		while(token != NULL)
		{
			args[args_count++] = token;
			token = strtok(NULL, " ");
		}
		args[args_count] = NULL;

		execvp(args[0], args);

		bona_print("Error executing command.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
