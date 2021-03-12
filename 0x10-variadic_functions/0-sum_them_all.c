#include "variadic_functions.h"

/**
 * sum_them_all - sums the parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list lista;

	va_start(lista, n);

	if (n == 0) /* return condition */
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(lista, int);
	}

	va_end(lista);

	return (sum);
}
