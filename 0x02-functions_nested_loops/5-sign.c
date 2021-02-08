#include "holberton.h"

/**
 * print_sign - check the code for alphabetic char.
 * @n: parameter or value to evaluate.
 *
 * Return: 1 if true with symbol and 0 if zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

