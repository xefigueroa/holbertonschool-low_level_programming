#include "holberton.h"

/**
 * _strdup - returns pointer to duplicated string
 * @str: string to evaluate
 *
 * Return: Null if str = NULL or if NSF memory available
 */

char *_strdup(char *str)
{
	char *copy; /* copy */
	int i; /* index */
	int len; /* length */

	if (str == NULL) /* return condition */
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++) /* mem alloc */
	{}
	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL) /* return condition */
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++) /*copying string */
	{
		copy[i] = str[i];
	}

	copy[len] = '\0';
	return (copy);
}
