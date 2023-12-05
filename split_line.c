#include "main.h"
/*
 * tok_line - function tokenizes string input
 * @line: input
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
	/*
	free(str);*/
	free(dup);
	return (ptr);
}
/*
int main()
{
	char str[] = "/bin/ls";
	int i = 0;
	char **cmd;

	cmd = tok_line(str);

	if (execve(cmd[0], cmd, NULL) == -1);
	{
		printf("Error\n");
	}
	return (0);
}	
*/