#include "holberton.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: number of bytes to alloc
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *v = malloc(b);

	if (v == NULL)
	{
		exit(98);
	}
	return (v);
}
