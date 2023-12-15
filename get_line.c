#include "main.h"

/**
 * read_line - function reads input from stdin
 *
 * Return: pointer to read string
 */
char *read_line()
{
	size_t n;
	char *buf;

	if (getline(&buf, &n, stdin) == -1)
	{
		exit(EXIT_SUCCESS);
	}
	return (buf);
}
