#include "holberton.h"

/**
 * _strncpy - copies a string.
 * @dest: destination of copy.
 * @src: source of original.
 * @n: number of bytes.
 *
 * Return: copy of string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int w;

	w = 0;

	for (; w < n && src[w] != '\0'; w++)
	{
		dest[w] = src[w];
	}

	for (; w < n; w++)
	{
		dest[w] = '\0';
	}

	return (dest);
}

