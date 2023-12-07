#ifndef BUILTIN_H
#define BUILTIN_H

#include <stdio.h>

void _builtin(char *buf, char **args);
void exiting(char *f, char **arg);
void go_to(char *f, char **arg);
void environ(char *f, char **arg);

#endif
