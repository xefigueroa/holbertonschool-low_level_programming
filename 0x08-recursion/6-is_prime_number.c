#include "holberton.h"

int prime_checker(int n, int div);

/**
 * prime_checker - checks for prime number
 * @n: number to eval
 * @div: counter for prime
 *
 * Return: 1 if prime or 0 if not
 */

int prime_checker(int n, int div)
{
	if (n == div)
	{
		return (1);
	}
	if (n % div == 0 || n <= 1)
	{
		return (0);
	}
	return (prime_checker(n, div + 1));
}

/**
 * is_prime_number - checks if prime
 * @n: number to eval
 *
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	int div;

	div = 2;
	div = prime_checker(n, div);
	return (div);
}

