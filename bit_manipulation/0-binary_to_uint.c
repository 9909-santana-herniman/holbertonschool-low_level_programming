#include "main.h"
#include <stdio.h>
#include <stddef.h> /* For NULL */

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary_num = 0;
	int i = 0;

	/* Check if b is NULL */
	if (b == NULL)
	{
		return (0);
	}

	/* Traverse the string */
	while (b[i] != '\0')
	{
		/* Check for invalid characters */
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		/* Shift binary_num left by 1 and add the current bit */
		binary_num = (binary_num << 1) | (b[i] - '0');
		i++;
	}
	return (binary_num);
}
