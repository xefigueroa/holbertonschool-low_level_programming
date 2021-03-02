#include "holberton.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: Destination concatenated string.
 * @src: Source of origincal string to concat.
 *
 * Return: Pointer to resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int v, w;

	v = 0;
	w = 0;

	for (; dest[v] != '\0'; v++)
	{
	}

	for (; src[w] != '\0'; w++, v++)
	{
		dest[v] = src[w];
	}
	dest[v] = '\0';

	return (dest);
}

