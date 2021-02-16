#include "holberton.h"

/**
 * print_rev - print string in reverse followed by newline
 * @s: value to be printed
 */
void print_rev(char *s)
{
	int v;

	v = 0;
	while (s[v])
	{
		v++;
	}
	while (--v >= 0)
		_putchar(s[v]);
	_putchar('\n');
}

