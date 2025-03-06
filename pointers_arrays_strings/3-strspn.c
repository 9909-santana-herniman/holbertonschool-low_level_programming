#include "main.h"

/**
 * _strspn - A function that counts how many characters
 * from the start of a string, match any character from another string.
 * @s: Pointer to the string checked.
 * @accept: Pointer to the string containing acceptable characters.
 * Return: The number os characters in 's' that match any character
 * from 'accept', starting from the beginning of 's'.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s) /* Loop through string s */
	{
		char *a = accept;

		while (*a) /* Loop through string accept */
		{
			if (*s == *a) /* If character matches */
			{
				count++; /* Move to next character in s */
				break;
			}
		a++; /* Move to the next character in accept */
		}
		if (*a == '\0') /* If no match, then stop */
		{
			break;
		}
	s++; /* Move to the next character in s */
	}
	return (count);
}
