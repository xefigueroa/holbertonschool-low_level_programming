#include "holberton.h"

/**
 * reverse_array - reverses content of array of int.
 * @a: array to evaluate.
 * @n: number of elements of the array.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int v, tmp;

	v = 0;
	while (v < n)
	{
		tmp = a[n - 1];
		a[n - 1] = a[v];
		a[v] = tmp;
		v++;
		n--;
	}
}

