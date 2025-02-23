#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 * @c: parameter is a c integer
 * Return: 1 if c is lowercase or uppercase, otherwise 0.
 */

int _isalpha(int c)
{
	/* Search range of upper and lower case letters */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
