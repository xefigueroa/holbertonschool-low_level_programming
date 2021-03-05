#include "holbeton.h"

/**
 * array_range - create an array of integers
 * @min: min value of array
 * @max: max vlaue of array
 *
 * Return: NULL if min>max or if malloc fails
 */

int *array_range(int min, int max)
{
	int *arr, i, len;

	if (min > max) /* return condition */
	{
		return (NULL);
	}

	len = max - min + 1; /* length of array */

	arr = malloc(sizeof(int) * len); /* mem alloc */

	if (arr == NULL) /* return condition */
	{
		return (NULL);
	}

	for (i = 0; i < len; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}
