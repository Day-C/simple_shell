#include "main.h"
/**
 * execute - function runs an executable file
 * @cmd: pointer to an array of  stings
 * Return: erturn 0 on success;
 */
int execute(char **cmd, char *file_name)
{
	pid_t child;

	child = fork();
	if (child == 0)
	{
		if (execve(cmd[0], cmd, NULL) == -1)
		{
			perror(file_name);
			return (1);
		}
	}
	else
	{
		wait(NULL);
		return (0);
	}
}


