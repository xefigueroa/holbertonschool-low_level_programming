#include "holberton.h"

/**
 * factorial - calculate factorial of n
 * @n: number to evaluate
 *
 * Return: factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
