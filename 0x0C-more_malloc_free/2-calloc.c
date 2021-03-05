#include "holberton.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of values
 * @size: size of each element
 *
 * Return: pointer to alloc mem. NULL if nmemb/size = 0 or malloc fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0) /* return condition */
	{
		return (NULL);
	}

	arr = malloc(nmemb * size); /* mem alloc */

	if (arr == NULL) /* return condition */
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++) /* init to zero */
	{
		arr[i] = 0;
	}

	return (arr);
}
