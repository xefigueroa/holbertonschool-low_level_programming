#include "holberton.h"

/**
 * _strchr - locate character in string.
 * @s: string to evaluate
 * @c: character to search
 *
 * Return: pointer to first ocurrence of char or NULL
 */

char *_strchr(char *s, char c)
{
	int v;

	for (v = 0; s[v] >= '\0'; v++)
	{
		if (s[v] == c)
		{
			return (s + v);
		}
	}
	return (NULL);
}

