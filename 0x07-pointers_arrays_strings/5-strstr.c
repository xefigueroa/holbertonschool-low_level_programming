#include "holberton.h"

/**
 * _strstr - locate a substring
 * @haystack: string to evaluate
 * @needle: susbstring used for evaluation
 *
 * Return: pointer to beggining of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int v;

	while (*haystack != '\0')
	{
		v = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			haystack++, needle++, v++;
		}
		if (*needle == '\0')
		{
			return (haystack - v);
		}

		haystack -= (v - 1);
		needle -= v;

	}
	return ('\0');
}

