#include "holberton.h"

/**
 * rev_string - reverse of string
 * @s: value to be reversed
 */

void rev_string(char *s)
{
	int v, w;
	char z;

	for (v = 1; s[v]; v++)
	{}

	for (w = 0; w < v; w++, v--)
	{
		z = s[v - 1];
		s[v - 1] = s[w];
		s[w] = z;
	}
}

