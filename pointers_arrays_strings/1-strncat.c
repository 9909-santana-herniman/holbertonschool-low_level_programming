#include "main.h"

/**
 * _strncat - A function that concatenates two strings,
 * up to n amount of characters.
 * @dest: Pointer to destination array
 * @src: The string to be appended
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int src_index;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len = dest_len + 1;
	}
	
	src_index = 0;
	while (src_index < n && src[src_index] != '\0')
	{
		dest[dest_len] = src[src_index];
		dest_len = dest_len + 1;
		src_index = src_index + 1;
	}
	dest[dest_len] = '\0';
	
	return (dest);
}
