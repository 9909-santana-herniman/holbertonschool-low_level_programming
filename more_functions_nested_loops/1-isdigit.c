#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9)
 * @c: A character integer
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	/* Check the range from 0 to 9 */
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
