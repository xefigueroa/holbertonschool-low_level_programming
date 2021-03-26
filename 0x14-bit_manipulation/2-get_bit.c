#include "holberton.h"

/**
 * get_bit - returns value of bit at given index
 * @n: number to evaluate
 * @index: index used to determine value
 *
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int v;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	for (v = 0; v < index; v++)
	{
		n = n >> 1;
	}

	return ((n & 1));
}
