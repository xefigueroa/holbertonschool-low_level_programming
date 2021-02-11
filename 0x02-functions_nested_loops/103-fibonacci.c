#include <stdio.h>

/**
 * main - find/print sum of even-valued not exceed 4 million.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long v = 0, w = 1, tempSum = 0;
	float evenSum;

	while (1)
	{
		tempSum = v + w;
		if (tempSum > 4000000)
		{
			break;
		}
		if ((tempSum % 2) == 0)
		{
			evenSum = evenSum + tempSum;
		}
		v = w;
		w = tempSum;
	}

	printf("%.0f\n", evenSum);
	return (0);
}
