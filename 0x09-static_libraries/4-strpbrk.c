#include "holberton.h"

/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: string to evaluate
 * @accept: string to use for evaluation
 *
 * Return: pointer to the byte of s that matches NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int v;

	while (*s)
	{
		for (v = 0; accept[v]; v++)
		{
			if (*s == accept[v])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

