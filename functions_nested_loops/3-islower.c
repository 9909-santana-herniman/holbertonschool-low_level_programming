#include "main.h"

/**
 * _islower - A function that checks for lowercase character
 * @c: Character integer
 * Return: 1 if c is lowercase, otherwise 0.
 */

int _islower(int c)
{
	/* Check the range of lowercase letters */
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
