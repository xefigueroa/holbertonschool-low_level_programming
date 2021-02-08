#include "holberton.h"

/**
 * _abs - check the code for alphabetic char.
 *@v: value that will be computed.
 *
 * Return: v abs (Success).
 */

int _abs(int v)
{
	if (v < 0)
	{
		v = v * (-1);
	}
	return (v);
}

