#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stddef.h>

/**
 * struct lists - structure for path directories
 * @dir: pointer to string
 * @next: pointer to next node
 *
 * Description: The list structure is to be used to store all the directories
 * of the path into a single linked list
 */
typedef struct node{
	char *dir;
	struct node *next;
} lists;

char *read_line(void);
char **tok_line(char *str);
int execute(char **cmd,char *file_name);
void interactive_shell(char **oagrs;

#endif