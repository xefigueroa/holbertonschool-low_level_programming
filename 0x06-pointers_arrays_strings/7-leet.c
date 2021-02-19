#include "holberton.h"

/**
 * leet - encodes string into 1337
 * @s: string to convert
 *
 * Return: string conversion
 */

char *leet(char *s)
{
	int v, w;
	char arr[] = "a4A4e3E3o0O0t7T7l1L1";

	for (v = 0; s[v] != '\0'; v++)
	{
		for (w = 0; w < 20; w++)
		{
			if (s[v] == arr[w])
			{
				s[v] = arr[w + 1];
			}
			w++;
		}
	}
	return (s);
}
