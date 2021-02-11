#include <stdio.h>

/**
 * main - prints first 50 fibonacci nums.
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long v = 0, w = 1, fSum;

	for (i = 0; i < 50; i++)
	{
		fSum = v + w;
		printf("%lu", fSum);
		v = w;
		w = fSum;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}

