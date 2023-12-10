#include "main.h"
#include "builtin.h"

/**
 * exiting - function to exit
 * @ipt: command input
 * @arg: tokens of command
 * @env_i: enviroment variable
 * Return: nothing (void)
 */
void exiting(char *ipt, char **arg, char **env_i)
{
	while (env_i)
	{
		free(ipt);
		free(arg);
		exit(EXIT_SUCCESS);
	}
}

/**
 * go_to - functioon to change directory
 * @ipt: input command
 * @arg: tokenized command
 * @env_i: enviroment variable
 * Return: void
 */
void go_to(char *ipt, char **arg, char **env_i)
{
	while (env_i)
	{
		free(ipt);
		free(arg);
	}
}

/**
 * enviroment - function for enviroment var
 * @ipt: input command
 * @arg: tokenised command
 * @env_i: envirunment variable
 * Return: void
 */
void enviroment(char *ipt, char **arg, char **env_i)
{
	int i;

	if (ipt != NULL && arg != NULL)
	{
		for (i = 0; env_i[i]; i++)
		{
			printf("%s\n", env_i[i]);
		}
	}
}
