#include "main.h"

/**
 * _strpbrk - A function that searches a string
 * for any of a set of bytes.
 * @s: First string to search.
 * @accept: The string containing bytes to match in s.
 * Return: Pointer to s of any byte in accept, otherwise NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s) /* Loop through string s */
	{
		char *a = accept;

		while (*a) /* Check each character in accept */
		{
			if (*s == *a) /* If match found */
			{
				return (s); /* Return to matched byte */
			}
		a++; /* Move to next character in accept */
		}
	s++; /* Move to next character in s */
	}
	return ('\0');
}
