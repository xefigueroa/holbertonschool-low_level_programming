#include "holberton.h"

int _strlen(char *s, int l);
int palicn_check(char *s, int length, int count, int half);

/**
 * _strlen - find length of string
 * @s: string to eval
 * @l: length counter
 *
 * Return: length of string
 */

int _strlen(char *s, int l)
{
	if (*s == '\0')
	{
		return (l);
	}
	s++;
	l++;
	return (_strlen(s, l));
}

/**
 * palin_check - check if string is palindrome
 * @s: string to eval
 * @length: length of string
 * @count: counter
 * @half: half of length
 *
 * Return: 1 if palindrome or  0 if not
 */

int palin_check(char *s, int length, int count, int half)
{
	if (s[count] != s[length - 1])
	{
		return (0);
	}
	if (count == half)
	{
		return (1);
	}
	count++;
	length--;
	return (palin_check(s, length, count, half));
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string to eval
 *
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int length, count, half;

	if (*s == '\0')
	{
		return (1);
	}

	length = 0;
	count = 0;

	length = _strlen(s, length);
	half = length / 2;
	length = palin_check(s, length, count, half);
	return (length);
}
