#include "main.h"
#include "str.h"
#include "builtin.h"

/**
 * _builtin - function chechs is command is a valid built in command
 * @buf: string pointer(input)
 * @args: double pointer
 * @env_var: envirunment variable
 * Return: return 0 on success and -1 otherwise
 */
int _builtin(char *buf, char **args, char **env_var)
{
	int len, i;

	built_in list[]  = {
		{"cd", go_to},
		{"exit", exiting},
		{"env", enviroment}
	};

	len = 3;
	for (i = 0; i < len; i++)
	{
		if (compare_str(args[0], list[i].str) == 0)
		{
			list[i].func(buf, args, env_var);
			return (0);
		}
	}
	return (-1);
}
