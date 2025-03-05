#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 * @s: Pointer to a string to search.
 * @c: Char variable to find in string.
 * Return: First occurence of character c, otherwise NULL
 */

char *_strchr(char *s, char c)
{
	/* Loop through string until null terminator reached */
	while (*s)
	{
		if (*s == c) /* Check if the current character matchers 'c' */
		{
			return (s); /* Return first occurrence */
		}
		s++; /* Move to next character */
	}

	/* If 'c' is null terminator, return a pointer to it */
	if (c == '\0')
	{
		return (s);
	}

	return ('\0'); /* If 'c' is not found, return NULL */
}
