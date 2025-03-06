#include "main.h"

/**
 * _strstr - A function that locates a substring.
 * @haystack: String to be searched for substring.
 * @needle: The substring to search for in haystack.
 * Return: A pointer to the beginning of the located
 * substring, or NULL if the substring not found.
 */

char *_strstr(char *haystack, char *needle)
{
	/* Iterate through each character of haystack (larger string) */
	while (*haystack)
	{
		/* Store current position of haystack*/
		char *start = haystack;
		/* Start comparing with needle (substring) */
		char *pattern = needle;

		/* Loop continues as long as there are characters left */
		/* in both strings, and the characters at the current */
		/* position match. If all match, the loop ends */
		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++; /* Move to next character in haystack */
			pattern++; /* Move to next character in pattern */
		}

		/* If we matched the entire needle, return the position */
		if (!*pattern)
		{
			return (start);
		}
	/* Otherwise, move haystack to the next character, continue search */
	haystack = start + 1;
	}
	return ('\0'); /* Return NULL if no match */
}
