#include "holberton.h"

/**
 * swap_int - swaps value of two ints
 * @a: first int pointer
 * @b: second int pointer
 */

void swap_int(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *b ^ *a;
	*a = *a ^ *b;
}

