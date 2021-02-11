#include "holberton.h"

void table_calc(int z);

/**
 * print_times_table- prints times table starting with 0.
 * @n: limit for multiplication table
 *
 * Return: void.
 */

void print_times_table(int n)
{
	int x;
	int y;
	int z;

	if (n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');

			for (y = 1; y <= n; y++)
			{
				if (n >= 0 && n <= 15)
				{
					z = y * x;
					table_calc(z);
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * table_calc - calculation and print of numbers
 * @z: product of y and x on previous function.
 *
 * Return: void.
 */

void table_calc(int z)
{
	_putchar(',');
	_putchar(' ');

	if (z <= 9)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(z + '0');

	}
	else if (z <= 99)
	{
		_putchar(' ');
		_putchar(z / 10 + '0');
		_putchar(z % 10 + '0');
	}
	else if (z <= 999)
	{
		_putchar(z / 100 + '0');
		_putchar((z / 10) % 10 + '0');
		_putchar(z % 10 + '0');
	}
}

