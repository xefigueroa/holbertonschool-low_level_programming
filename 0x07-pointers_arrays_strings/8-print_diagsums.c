#include "holberton.h"

/**
 * print_diagsums - sum of 2 diagonals square matrix ints
 * @a: matrix to evaluate
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, ldiag = 0, rdiag = 0;

	for (i = 0; i < size; i++)
	{
		ldiag = ldiag + a[i];
		a = a + size;
	}

	a = a - size;

	for (i = 0; i < size; i++)
	{
		rdiag = rdiag + a[i];
		a = a - size;
	}
	printf("%d, %d\n", ldiag, rdiag);
}

