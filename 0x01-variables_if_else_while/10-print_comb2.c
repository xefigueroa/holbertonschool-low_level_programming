#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v, w;

	v = '0';
	while (v <= '9')
	{
		for (w = '0'; w <= '9'; w++)
		{
			putchar(v);
			putchar(w);
			if (v != '9' || w != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		v++;
	}
	putchar('\n');
	return (0);
}

