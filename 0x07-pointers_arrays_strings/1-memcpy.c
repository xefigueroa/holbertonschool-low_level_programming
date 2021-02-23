#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of copy
 * @src: source we will copy
 * @n: number of bytes n bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
	{
		dest[v] = src[v];
	}
	return (dest);
}

