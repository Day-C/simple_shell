#include "main.h"
#include "str.h"
/**
 * in_path_check - function check if path is valid
 * @cmd: pointer to input command
 * Return: pointer to str (directory)
 */
char *in_path_check(char *cmd)
{
	char *catted_cmd;
	struct stat st;
	lists *temp = NULL;
	lists *head = NULL;

	head = path_dirs();

	while (head)
	{
		catted_cmd = concat(head->dir, cmd);
		if (stat(catted_cmd, &st) == -1)
		{
			free(catted_cmd);
			temp = head->next;
			free(head->dir);
			free(head);
			head = temp;
			continue;
		}
		else
		{
			if (head != NULL)
			{

			}
			break;
		}
	}
	return (catted_cmd);
}


