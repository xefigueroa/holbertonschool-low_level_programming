#include "holberton.h"

/**
 * _strcpy - copies string from one pointer array to other
 * @dest: destination for copy.
 * @src: source of original.
 *
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int v;

	for (v = 0; src[v]; v++)
	{
		dest[v] = src[v];
	}
	dest[v] = '\0';

	return (dest);
}

