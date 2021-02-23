#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array for the board
 *
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	unsigned int v;
	unsigned int w;

	for (v = 0; v < 8; v++)
	{
		for (w = 0; w < 8; w++)
		{
			_putchar(a[v][w]);
		}
		_putchar('\n');
	}
}
