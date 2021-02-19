#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: number to print
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int v = n;

	if (n < 0)
	{
		_putchar('-');
		v = -v;
	}

	if ((v / 10) > 0)
	{
		print_number(v / 10);
	}

	_putchar((v % 10) + '0');
}

