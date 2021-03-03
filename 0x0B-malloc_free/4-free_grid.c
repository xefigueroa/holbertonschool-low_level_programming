#include "holberton.h"

/**
 * free_grid - free 2d array grid
 * @grid: 2d array to free
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
