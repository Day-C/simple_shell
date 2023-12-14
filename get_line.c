#include "main.h"

/**
 * read_line - function reads input from stdin
 *
 * Return: pointer to read string
 */
char *read_line()
{
	char *buf = NULL;
	size_t n;

	if (getline(&buf, &n, stdin) == -1)
	{
		free(buf);
		exit(EXIT_FAILURE);
	}

	return (buf);
}
