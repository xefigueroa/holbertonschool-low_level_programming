#include "holberton.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: Returns + or - int or 0 based on the comparison.
 */

int _strcmp(char *s1, char *s2)
{
	int v;

	v = 0;
	for (; s1[v] != '\0'; v++)
	{
		if (s1[v] != s2[v])
		{
			return (s1[v] - s2[v]);
		}
	}
	return (0);
}

