#include "holberton.h"

/**
 * _strlen_recursion - return length of string
 * @s: string to evaluate
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}
