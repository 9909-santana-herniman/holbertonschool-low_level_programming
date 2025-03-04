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
	int i = 0; /* Initialise counter */

	/* Copy characters from src to dest */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	/* Fill remaining space in dest with '\0' */
	while (i < n)
	{
		dest[i] = '\0';
		i = i + 1;
	}
	return (dest); /* Return pointer to dest */
}
