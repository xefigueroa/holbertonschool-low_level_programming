#include "vadiadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lista;
	char *str;

	va_start(lista, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(lista, char *);

		if (str == NULL)
		{
			str = "(nil)";
		}

		printf("%s", str);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

