#include "main.h"
/*
 * path_dirs - path fnction
 *
 * Return: return 
 */
lists *path_dirs()
{
	char path[] = "/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin";
	char *tok;
	lists *head = NULL;
	lists *temp = NULL;
	lists *new_node;

	tok = strtok(path, ":\0");
	while (tok)
	{
		new_node = malloc(sizeof(lists));
		new_node->dir  = strdup(tok);
		new_node->next = NULL;

		if (!head)
		{
			head = new_node;
			temp = new_node;
		}
		else
		{
			temp->next = new_node;
			temp = new_node;
		}
		dir = strtok(NULL, ":\0");
	}
	return (head);
}
