#include <stdio.h>

/**
 * main - print all args it receives
 * @argc: number of parameters
 * @argv: array with parameters passed to function
 *
 * Return: 0
 */

int main(__attribute__((unused))int argc, char **argv)
{
	int v;

	for (v = 0; argv[v] != '\0'; v++)
	{
		printf("%s\n", argv[v]);
	}
	return (0);
}

