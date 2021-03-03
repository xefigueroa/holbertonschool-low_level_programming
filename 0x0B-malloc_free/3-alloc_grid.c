#include "holberton.h"

/**
 * alloc_grid - Returns pointer to 2D array of ints
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: NULL if w or h = 0 or fail. Return pointer (Success)
 */

int **alloc_grid(int width, int height)
{
	int **arr2, h, w;

	if (width <= 0 || height <= 0) /* return condition */
	{
		return (NULL);
	}

	arr2 = malloc(sizeof(int *) * height); /* mem alloc */

	if (arr2 == NULL) /* return condition */
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		arr2[h] = malloc(sizeof(int) * width); /* mem alloc */
		if (arr[h] == NULL) /* return condition/free */
		{
			for (; h >= 0; h--)
			{
				free(arr2[h]);
			}
			free(arr2);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			arr2[h][w] = 0;
		}
	}

	return (arr2);
}
