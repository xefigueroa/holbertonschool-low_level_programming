#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of parameters
 * @argv: array with parameters passed to function
 *
 * Return: 0
 */

int main(__attribute__((unused))int argc, char **argv)
{
	int v;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	v = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", v);
	return (0);
}

