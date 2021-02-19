#include "holberton.h"

/**
 * cap_string - capitalizes words of a string
 * @s: string to convert character from
 * Return: Converted string.
 */

char *cap_string(char *s)
{
	int v;

	for (v = 0; s[v] != '\0'; v++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}

		if (s[v - 1] == ' ' && (s[v] >= 'a' && s[v] <= 'z'))
		{
			s[v] = s[v] - 32;
		}

		if (s[v] == '.' && (s[v + 1] >= 'a' && s[v + 1] <= 'z'))
		{
			s[v + 1] = s[v + 1] - 32;
		}

		if (s[v] == '\t' && (s[v + 1] >= 'a' && s[v + 1] <= 'z'))
		{
			s[v + 1] = s[v + 1] - 32;
		}

		if (s[v] == '\n' && (s[v + 1] >= 'a' && s[v + 1] <= 'z'))
		{
			s[v + 1] = s[v + 1] - 32;
		}
	}
	return (s);
}
