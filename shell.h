#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/wait.h>

void bona_print(const char *input);
void prompt_display(void);
void execute_prompt(const char *input);
void take_command(char *input, size_t size);
void execute_command(const char *input);
#endif
