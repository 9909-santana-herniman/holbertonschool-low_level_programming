#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 * @c: Character to be checked
 * Return: 1 if uppercase, otherwise 0
 */

int _isupper(int c)
{
	/* Check the uppercase range from A to Z */
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
