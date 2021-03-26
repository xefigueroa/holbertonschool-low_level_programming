#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to bit
 * @index: index to set value at
 *
 * Return: 1 if success. -1 if error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	if (((*n >> index) & 1) ==  1)
	{
		*n = ((*n) ^ (1 << index));
	}
	return (1);
}
