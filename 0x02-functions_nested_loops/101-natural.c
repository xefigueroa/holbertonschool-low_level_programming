#include <stdio.h>

/**
 * main - prints multiples of 3 or 5 below (less than) 1024
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int v, w;

	for (v = 0; v < 1024; v++)
	{
		if ((v % 3) == 0 || (v % 5) == 0)
		{
			w = w + v;
		}
	}

	printf("%d\n", w);

	return (0);
}

