#include "main.h"
/**
 * tok_line - function tokenizes string input
 * @str: input
 * Return: returns double pinter to tokens
 */
char **tok_line(char *str)
{
	char *delim = (" \n");
	char *dup = strdup(str);
	char *tok;
	char *token;
	int i, j = 0;
	char **ptr;

	tok = strtok(dup, delim);
	if (tok == NULL)
	{
		free(dup);
		free(str);
		exit(EXIT_SUCCESS);
	}
	while (tok)
	{
		j++;
		tok = strtok(NULL, delim);
	}
	j++;

	ptr = malloc(sizeof(char *) * j);
	if (!ptr)
	{
		free(str);
		free(dup);
		return (NULL);
	}

	i = 0;
	token = strtok(str, delim);
	while (token)
	{
		ptr[i] = token;
		token = strtok(NULL, delim);
		i++;
	}

	free(dup);
	return (ptr);
}
