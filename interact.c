#include "main.h"
#include "builtin.h"
/**
 * interactive_shell - function for interactive shell
 * @args: main argument vector
 * @envir: envirunment variable
 * Return: nothing
 */
void interactive_shell(char **args, char **envir)
{
	char *str;
	char **cmd;

	while (1)
	{
		printf(":) ");
		str = read_line();
		cmd = tok_line(str);
		if (_builtin(str, cmd, envir) == -1)
		{
			run_execute(cmd, args[0]);
		}
		free(cmd);
		free(str);
	}
}
