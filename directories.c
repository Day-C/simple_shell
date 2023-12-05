#include "main.h"
/*
 * path_dirs - path fnction
 *
 * Return: return 
 */
lists *path_dirs()
{
	char path[] = "/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin";
	int i = 0;
	char *tok;
	list *head;
	list *next;
	list *new_node;

	new_node = malloc(sizeof(list));
	new_node->data

	tok = strtok(path, ":\0");
	while (tok)
	{
		if (!head)
		{
			head->dir = tok;
			t
