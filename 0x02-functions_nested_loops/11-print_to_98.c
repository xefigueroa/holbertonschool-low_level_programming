#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - counts to 98 from given value.
 * @n: given value.
 *
 * return: countdown.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n > 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}

