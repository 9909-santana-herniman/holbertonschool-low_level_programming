#include "main.h"

/**
 * _strncat - A function that concatenates two strings,
 * up to n amount of characters.
 * @dest: Pointer to destination array.
 * @src: The string to be appended from.
 * @n: Number of characters to be appended.
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len; /* Set length count for dest */
	int src_index; /* Set index count for src */

	dest_len = 0;
	/* Find the length of dest by iterating to '\0' */
	while (dest[dest_len] != '\0')
	{
		dest_len = dest_len + 1;
	}

	src_index = 0;
	/* Append up to n characters from src to dest */
	while (src_index < n && src[src_index] != '\0')
	{
		dest[dest_len] = src[src_index]; /* Copy character from src */
		dest_len = dest_len + 1; /* Move to next position in dest */
		src_index = src_index + 1; /* Move to next character in src */
	}
	dest[dest_len] = '\0'; /* Add '\0' to resutling string dest */

	return (dest);
}
