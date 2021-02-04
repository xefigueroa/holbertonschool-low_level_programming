
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char v;

	for (v = 'z'; v >= 'a'; v--)
	{
		putchar(v);
	}
	putchar('\n');
	return (0);
}

