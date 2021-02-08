#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet followed by newline x10.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char v;
	int w;

	for (w = 0; w <= 9; w++)
	{
		for (v = 'a'; v <= 'z'; v++)
		{
			_putchar(v);
		}
		_putchar('\n');
	}
}

