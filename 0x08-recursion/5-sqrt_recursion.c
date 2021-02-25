#include "holberton.h"

int root_finder(int n, int rt);

/**
 * root_finder - locate natural square root of n
 * @n: number to evaluate
 * @rt: root that will be found
 *
 * Return: natural sqrt or -1
 */

int root_finder(int n, int rt)
{
	if ((rt * rt) == n)
	{
		return (rt);
	}
	if (rt == n / 2)
	{
		return (-1);
	}
	return (root_finder(n, rt + 1));
}

/**
 * _sqrt_recursion - locate natural square root of n
 * @n: number to evaluate
 *
 * Return: if natural then sqrt else -1
 */

int _sqrt_recursion(int n)
{
	int rt = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (root _finder(n, rt));
}
