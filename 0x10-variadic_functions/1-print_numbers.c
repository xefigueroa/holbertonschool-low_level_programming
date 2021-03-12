#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to functionm
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lista;

	va_start(lista, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lista, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
