#include "main.h"
/**
 * main - main
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 on success
 */
int main(int argc, char **argv, char  **envp)
{
	while (argc >= 1)
	{
		if (isatty(STDIN_FILENO) == 1)
			interactive_shell(argv, envp);
	}
	return (0);
}
