#include "holberton.h"

/**
 * set_bit - set value of a bit to 1
 * @n: pointer for bit number
 * @index: index to set value
 *
 * Return: 1 if success. -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n = ((*n) | (1 << index));
	return (1);
}
