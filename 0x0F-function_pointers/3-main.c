#include "3-calc.h"

/**
 * main - perform simple operations
 * @argc: number of arguments
 * @argv: vector containing arguments
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int (*f)(int, int), num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]); /* change num1 to int */
	f = get_op_func(argv[2]); /* find function match for operator */
	num2 = atoi(argv[3]); /* change num2 to int */

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' && num2 == 0) || (argv[2][0] == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(num1, num2));
	return (0);
}
