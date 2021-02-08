#include "holberton.h"

/**
 * print_last_digit - prints last digit of said number.
 *@v: value that will be computed.
 *
 * Return: v abs (Success).
 */

int print_last_digit(int v)
{
	v = v % 10;
	if (v < 0)
	{
		v = v * (-1);
	}
	_putchar(v + '0');
	return (v);
}

