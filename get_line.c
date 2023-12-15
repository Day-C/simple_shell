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
	/**
	char *ptr;
	int n, i = 0;
	char buf[1024];

	n = read(STDIN_FILENO, &buf, 1024);
	if (n == -1 || buf[0] == EOF)
		exit(EXIT_SUCCESS);

	ptr = malloc(sizeof(char) * n);
	if (!ptr)
		exit(EXIT_SUCCESS);

	while (i < n)
	{
		ptr[i] = buf[i];
		i++;
	}
	return (ptr);v*/
