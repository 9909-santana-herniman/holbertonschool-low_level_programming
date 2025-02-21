#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 * @c: parameter is a c integer
 * Return: 1 if c is lowercase, otherwise 0.
 */

int _isalpha(int c)
{
	/* Use ASCII to search range of upper and lower case letters */
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
