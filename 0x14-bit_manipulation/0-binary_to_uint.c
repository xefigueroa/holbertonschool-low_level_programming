#include "holberton.h"

/**
 * binary_to_uint - convert a binary to unsigned int
 * @b: pointer to string of 0 and 1 chars (binary)
 *
 * Return: 0 if b = NULL or b > 1 || b < 0 then converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bnry = 0;
	unsigned int mult = 1;
	int len;

	if (b == '\0') /* return condition */
	{
		return (0);
	}

	for (len = 0; b[len] != '\0'; len++) /* b being string pointer */
	{}

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		bnry += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (bnry);
}
