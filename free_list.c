#include "main.h"
/**
 * free_lists - function frees a linked list
 * @head: first node
 * Return: nothing void function
 */
void free_lists(lists *head)
{
	lists *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head->dir);
		free(head);
		head = temp;
	}
}

