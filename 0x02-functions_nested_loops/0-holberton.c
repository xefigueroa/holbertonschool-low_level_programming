#include "holberton.h"

/**
 * main - prints Holberton with newline
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char *v = "Holberton";
	int w = 0;

	while (w <= 8)
	{
		_putchar(v[w]);
		w++;
	}
	_putchar('\n');

	return (0);
}
