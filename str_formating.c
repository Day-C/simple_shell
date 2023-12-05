#include "str.h"
/**
 * char_count - functioncounts number of character in string
 * @str: string pointer
 * Return: number of characters
 */
int char_count(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * concant_strs - function concatenate 2 input strings
 * @str1: first string pointer
 * @str2: second string pointer
 * Return: pointer to new string
 */
char *concat(char *str1, char *str2)
{
	int len1, len2, i, j;
	char *ptr;

	if (!str1 || !str2)
		return (NULL);

	len1 = char_count(str1);
	len2 = char_count(str2);

	ptr = malloc(sizeof(char) * (len1 + len2) + 1);
	if (!ptr)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		ptr[i] = str1[i];
	}
	ptr[i] = '/';
	i++;

	for (j = 0; j < len2; j++, i++)
	{
		ptr[i] = str2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * duplicate - function create a duplicate of string input
 * @str: string pointer
 * Return : pointer to duplicate
 */
char *duplicate(char *str)
{
	int str_len, i;
	char *dup;

	str_len = char_count(str);


	dup = malloc(sizeof(char) * str_len + 1);
	if (!dup)
		return (NULL);

	for (i = 0; i < str_len; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';

	return (dup);
}
