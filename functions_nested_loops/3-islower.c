#include "main.h"

/**
 * _islower - A function that checks for lowercase character
 * @c: parameter is a c integer
 * Return: 1 if c is lowercase, otherwise 0.
 */

int _islower(int c)
{
	/* Used ASCII to search range of letters */
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
