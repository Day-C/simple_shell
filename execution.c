#include "main.h"
#include "str.h"
/**
 * execut - function runs an executable file
 * @cmd: first argument of tokenised string(command)
 * @args: tokenized string
 * @file_name: first argument of argv
 * Return: erturn 0 on success;
 */
int execut(char *cmd, char **args, char *file_name)
{
	pid_t child;

	child = fork();

	if (child == -1)
	{
		perror(file_name);
		return (-1);
	}
	if (child == 0)
	{
		if (execve(cmd, args, NULL) == -1)
		{
			perror(file_name);
			return (-1);
		}
	}
	else
	{
		wait(NULL);
	}
	return (0);
}

/**
 * run_execute - function runs execute funtion
 * @arguments: command
 * @file: filename
 * Return: void;
 */
void run_execute(char **arguments, char *file)
{
	struct stat st;
	char *cmd;
	int ret;

	if (stat(arguments[0], &st) == 0)
	{
		cmd = arguments[0];
		ret = execut(cmd, arguments, file);
		if (ret == -1)
		{
			printf("need to free\n");
		}
	}
	else
	{
		cmd = in_path_check(arguments[0]);

		if (cmd != NULL)
		{
			ret = execut(cmd, arguments, file);
		}
		else
		{
			dprintf(STDERR_FILENO, "command: not found\n");
			exit(127);
		}
		free(cmd);
	}
}
