#include "holberton.h"

/**
 * string_nconcat - Concats two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concat with s1
 *
 * Return: NULL if fail. Pointer to alloc mem with string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, i;

	if (s1 == NULL) /* setup */
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++, len++) /*len prep for alloc */
	{}

	concat = malloc(sizeof(char) * (len + 1)); /* mem alloc */

	if (concat == NULL) /* return condition */
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; s1[i]; i++, len++)
	{
		concat[len] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++, len++)
	{
		concat[len] = s2[i];
	}

	concat[len] = '\0'; /* add null byte */

	return (concat);
}
