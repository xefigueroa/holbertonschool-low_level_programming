#include "holberton.h"

/**
 * puts2 - print every other char
 * @str: value to print
 */

void puts2(char *str)
{
	int v, w;

	for (v = 0; str[v] != '\0'; v++)
	{}

	for (w = 0; w < v; w++)
	{
		if (w % 2 == 0)
			_putchar(str[w]);
	}
	_putchar('\n');
}

