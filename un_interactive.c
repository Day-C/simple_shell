#include "main.h"

/**
 * non_interactive_shell - function for n non interactive shell
 * @argv: argument vec
 * Return: void
 */
void non_interactive_shell(char **argv)
{
	char *line;
	char **args;

	while (1)
	{
		line = read_line();
		args = tok_line(line);
		execut(line, args, argv[0]);
		free(line);
		free(args);
	}
}
