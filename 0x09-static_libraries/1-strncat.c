#include "holberton.h"

/**
 * _strncat - Concat two strings.
 * @dest: String concat destination.
 * @src: source of original string to concat.
 * @n: number of bytes.
 *
 * Return: Pointer to resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int v, w;

	v = 0;
	w = 0;

	for (; dest[v] != '\0'; v++)
	{
	}

	for (; w < n && src[w] != '\0'; w++, v++)
	{
		dest[v] = src[w];
	}
	dest[v] = '\0';

	return (dest);
}

