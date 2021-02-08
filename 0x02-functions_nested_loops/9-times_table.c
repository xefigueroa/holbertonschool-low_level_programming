#include "holberton.h"

/**
 * times_table - multiplication table of 9.
 *
 * Return: void.
 */

void times_table(void)
{
	int v, w, z;

	for (v = 0; v <= 9; v++)
	{
		for (w = 0; w <= 9; w++)
		{
			z = v * w;
			if (z / 10)
			{
				_putchar(z / 10 + '0');
			}
			else if (w > 0)
			{
				_putchar(' ');
			}
			_putchar(z % 10 + '0');
			if (w < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

