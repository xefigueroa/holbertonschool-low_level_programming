#include <stdio.h>

/**
 * main - print number of arguments passed onto it
 * @argc: number of arguments
 * @argv: array with parameters or args passed to function
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}

