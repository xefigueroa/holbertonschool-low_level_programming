#include <unistd.h>

/**
 * main - Entry Point
 *
 * Return: 1 always
 */

int main(void)
{
	char *v;

	v = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, v, 59);
	return (1);
}
