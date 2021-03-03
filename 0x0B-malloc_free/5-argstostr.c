#include "holberton.h"

/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of arguments passed to program
 * @av: array of pointers to the arguments
 *
 * Return: NULL if ac/av = 0 or fails. Concats all args (Success)
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int arg, v, i = 0, len = ac;

	if (ac == 0 || av == NULL) /* return condition */
	{
		return (NULL);
	}

	for (arg = 0; arg < ac; arg++) /* determine length */
	{
		for (v = 0; av[arg][v]; v++)
		{
			len++;
		}
	}

	s = malloc(sizeof(char) * len + 1); /* mem alloc */

	if (s == NULL) /* return condition */
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg++) /* concatenating */
	{
		for (v = 0; av[arg][v]; v++)
		{
			s[i++] = av[arg][v];
		}

		s[i++] = '\n';
	}

	s[len] = '\0';

	return (s);
}
