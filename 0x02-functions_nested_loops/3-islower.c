#include "holberton.h"

/**
 * _islower - check the code for lowercase char.
 * @c: parameter or value to evaluate.
 *
 * Return: 1 if true and 0 if not.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

