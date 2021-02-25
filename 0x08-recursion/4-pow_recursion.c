#include "holberton.h"

/**
 * _pow_recursion - evaluate power of a value
 * @x: integer
 * @y: exponent
 *
 * Return: if y is lower than 0 then -1 or evaluated value
 */

int _pow_recursion(int x, int y)
{
	if (y < -1)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y <= 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
