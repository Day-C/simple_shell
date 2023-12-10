#include "main.h"
#include "str.h"
#include "builtin.h"
/**
 * struct built_in - structure to hold command and function for command
 * @str: string
 * @(func)(): function for  built_in
 *
 * Description: structure will be used to call a function if cmd is valid
 */
typedef struct command{
	char *str;
	void (*func)(char *a, char **b, char **c);
} built_in;


/**
 * _built_in - function chechs is command is a valid built in command
 * @cmd - string pointer(input)
 * @args: double pointer
 * @env_var: envirunment variable
 * Return: return 0 on success and -1 otherwise
 */
int _builtin(char *buf, char **args, char **env_var)
{       
	int len, i;
	char *impt;

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
