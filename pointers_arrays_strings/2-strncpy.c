#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @dest: Destination array to be copied to.
 * @src: The source we copy from.
 * @n: The maximum number of characters to copy.
 * Return: The modified dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_index = 0; /* Initialise counter */

	/* Copy characters from src to dest, stopping at n or '\0' */
	while (src_index < n && src[src_index] != '\0')
	{
		dest[src_index] = src[src_index];
		src_index++; /* Move to next character */
	}
	/* If src is shorter than n, add dest with null characters */
	while (src_index < n)
	{
		dest[src_index] = '\0';
		src_index++;
	}
	return (dest); /* Return pointer to dest */
}
