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
	void (*func)(char *b, char **a);
} built_in;


/**
 * is_built_in - function chechs is command is a valid built in command
 * @cmd - string pointer(input)
 * Return: return nothing (void function)
 */
void _builtin(char *buf, char **args)
{       
	int len, i;
	char *impt;

	built_in list[]  = {
		{"cd", go_to},
		{"exit", exiting},
		{"env", environ}
	};      

	len = 3;
	for (i = 0; i < len; i++)
	{
		if (compare_str(args[0], list[i].str) == 0)
		{
			list[i].func(buf, args);
		}
	}
}
