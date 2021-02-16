#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to evaluate
 */

void puts_half(char *str)
{
	int length, n;

	for (length = 0; str[length] != '\0'; length++)
	{}

	if (length % 2 != 0)
	{
		length++;
	}

	n = length / 2;
	for (; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');

}

