#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: Pointer to a string.
 * Return:
 */

int _strlen_recursion(char *s)
{
	int len = 0; /* strlen count variable */

	/* Check if 's' has reached '\0' */
	if (*s != '\0')
	{
		/* Store recursive call in 'len' */
		len = _strlen_recursion(s + 1);
		return (len + 1); /* Update return value 'len' */
	}
	return (len);
}
