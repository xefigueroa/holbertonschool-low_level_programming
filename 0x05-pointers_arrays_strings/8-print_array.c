#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints out elements of array
 * @a: array to use
 * @n: number of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int v;

	for (v = 0; v < n; v++)
	{
		printf("%d", a[v]);
		if (v + 1 < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}

