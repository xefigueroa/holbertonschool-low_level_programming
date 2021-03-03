#include "holberton.h"

/**
 * str_concat - concat two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to alloc mem with concat string or null
 */

char *str_concat(char *s1, char *s2)
{
	char *concats;
	int i;
	int v = 0;
	int len = 0;

	if (s1 == NULL) /* setup */
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}

	concats = malloc(sizeof(char) * len); /* mem alloc */

	if (concats == NULL) /* return condition */
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++, v++) /* concatenation */
	{
		concats[v] = s1[i];
	}
	for (i = 0; s2[i]; i++, v++) /* concatenation */
	{
		concats[v] = s2[i];
	}

	return (concats);
}
