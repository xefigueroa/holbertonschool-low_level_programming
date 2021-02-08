#include "holberton.h"

/**
 * print_alphabet - prints alphabet followed by newline.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
	{
		_putchar(v);
	}
	_putchar('\n');
}
