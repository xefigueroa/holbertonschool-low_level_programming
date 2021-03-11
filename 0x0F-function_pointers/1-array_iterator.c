#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter on each array elem
 * @array: array to evalueate
 * @size: size of array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
