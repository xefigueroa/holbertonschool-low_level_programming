#include "holberton.h"

/**
 * _isalpha - check the code for alphabetic char.
 * @c: parameter or value to evaluate.
 *
 * Return: 1 if true and 0 if not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

