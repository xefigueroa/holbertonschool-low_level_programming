#include "holberton.h"

/**
 * _atoi - convert string to int
 * @s: string to evaluate
 *
 * Return: 0 if no numbers in the string
 */

int _atoi(char *s)
{
	int w;
	unsigned int num;

	num = 0;
	w = 1;

	do {
		if (*s == '-')
		{
			w = w * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}

	} while (*s++);

	return (num * w);
}
