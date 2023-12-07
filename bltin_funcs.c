#include "main.h"
#include "builtin.h"
/**
 * exiting - function to exit
 *
 * Return: nothing (void)
 */
void exiting(char *f, char **arg)
{
	free(f);
	free(arg);
	exit(EXIT_SUCCESS);
}

/**
 * go_to - functioon to change directory
 *
 * Return: void
 */
void go_to(char *f, char **arg)
{
	free(f);
	free(arg);
	printf("hello\n");
}

/**
 * environ - function for enviroment var
 *
 * Return: void
 */
void environ(char *f, char **arg)
{
	free(f);
	free(arg);
	printf("/enviroment\n");
}
