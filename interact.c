#include "main.h"
#include "builtin.h"
/**
 * interactive_shell - function for interactive shell
 *
 *
 * Return: nothing
 */
void interactive_shell(char **args)
{
	int i = 0;
	char *str;
	char **cmd;

	while (1)
	{
		printf(":) ");
		str = read_line();
		cmd = tok_line(str);
		_builtin(str, cmd);
		run_execute(cmd, args[0]);
		free(cmd);
		free(str);
	}
}
