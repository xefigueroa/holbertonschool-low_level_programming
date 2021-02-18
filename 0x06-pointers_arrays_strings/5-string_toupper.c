#include "holberton.h"

/**
 * string_toupper - changes lowecase to uppercase
 * @s: String to change.
 *
 * Return: String changed.
 */

char *string_toupper(char *s)
{
	int v;

	v = 0;
	for (; s[v] != '\0'; v++)
	{
		if (s[v] >= 97 && s[v] <= 122)
		{
			s[v] = s[v] - 32;
		}
	}
	return (s);
}

