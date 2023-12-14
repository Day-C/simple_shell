#ifndef BUILTIN_H
#define BUILTIN_H

#include <stdio.h>
#include <stddef.h>

/**
 * struct command - structure to hold command and function for command
 * @str: string
 * @func: function for  built_in
 *
 * Description: structure will be used to call a function if cmd is valid
 */
typedef struct command
{
	char *str;
	void (*func)(char *a, char **b, char **c);
} built_in;

int _builtin(char *buf, char **args, char **env_var);
void exiting(char *ipt, char **arg, char **env_i);
void go_to(char *ipt, char **arg, char **env_i);
void enviroment(char *ipt, char **arg, char **env_i);

#endif
