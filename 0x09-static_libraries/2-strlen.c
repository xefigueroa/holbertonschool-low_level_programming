#include "holberton.h"

/**
 * _strlen - gives length of string
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int v;

	v = 0;
	while (*s++)
	{
		v++;
	}

	return (v);
}

