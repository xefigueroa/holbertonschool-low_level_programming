#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: prefix
 *
 * Return: number of bytes from s consisting of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int v;
	unsigned int bytes = 0;

	while (*s)
	{
		for (v = 0; accept[v]; v++)
		{
			if (*s == accept[v])
			{
				bytes++;
				break;
			}
			else if (accept[v + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}

