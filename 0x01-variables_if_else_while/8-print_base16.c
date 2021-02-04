#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char v;

	for (v = '0'; v <= '9'; v++)
	{
		putchar(v);
	}
	for (v = 'a'; v <= 'f'; v++)
	{
		putchar(v);
	}
	putchar('\n');
	return (0);
}

