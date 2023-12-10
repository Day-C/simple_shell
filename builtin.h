#ifndef BUILTIN_H
#define BUILTIN_H

#include <stdio.h>

int _builtin(char *buf, char **args, char **env_var);
void exiting(char *ipt, char **arg, char **env_i);
void go_to(char *ipt, char **arg, char **env_i);
void enviroment(char *ipt, char **arg, char **env_i);

#endif
