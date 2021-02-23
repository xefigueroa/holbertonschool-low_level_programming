#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: buffer
 * @b: constant byte b
 * @n: n bytes of memory area pointed by s
 *
 * Return: pointer to memory area of s.
 */

char *_memset(char *s, char b, unisgned int n)
{
	unsigned int v;

	v = 0;

	for (; v < n; v++)
	{
		s[v] = b;
	}
	return (s);
}
