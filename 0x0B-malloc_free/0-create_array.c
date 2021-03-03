#include "holberton.h"

/**
 * create_array - create array of chars and initialize with specific char
 * @size: size of array to initialize
 * @c: specific char to initialize with
 *
 * Return: pointer to array or Null if size=0/fail
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int v;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (v = 0; v < size; v++)
	{
		arr[v] = c;
	}

	return (arr);
}
