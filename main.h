#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stddef.h>
#include <sys/stat.h>

/**
 * struct node - structure for path directories
 * @dir: pointer to string
 * @next: pointer to next node
 *
 * Description: The list structure is to be used to store all the directories
 * of the path into a single linked list
 */
typedef struct node
{
	char *dir;
	struct node *next;
} lists;

char *read_line(void);
char **tok_line(char *str);
int execut(char *cmd, char **args, char *file_name);
void interactive_shell(char **agrs, char **envir);

lists *path_dirs();
void free_lists(lists *head);

char *in_path_check(char *cmd);
void run_execute(char **command, char *file);

#endif
