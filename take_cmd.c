#include "main.h"

/**
 * read_line - function reads input from stdin
 *
 * Return : pointer to read string
 */
char *read_line(void)
{
	char *buf = NULL;
	size_t n = 0;

	if (getline(&buf, &n, stdin) == -1)
	{
		free(buf);
		exit(EXIT_SUCCESS);
	}
	return (buf);
}
