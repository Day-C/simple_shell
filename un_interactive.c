#include "main.h"
#include "builtin.h"

/**
 * non_interactive_shell - function for n non interactive shell
 * @argv: argument vector
 * @envir: enviroment varable
 * Return: void
 */
void non_interactive_shell(char **argv, char **envir)
{
	char *line;
	char **args;

	while (1)
	{
		line = read_line();
		args = tok_line(line);
		if (_builtin(line, args, envir) == -1)
		{
			run_execute(args, argv[0]);
		}
		free(line);
		free(args);
	}
}
