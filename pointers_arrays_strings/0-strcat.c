#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: Pointer to destination array
 * @src: The string to be appended
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr) /* Move ptr to the end of dest */
	{
		ptr = ptr + 1;
	}

	while (*src) /* Copy to the end of dest */
	{
		*ptr++ = *src++;
	}
	/* Add null terminator */
	*ptr = '\0';

	return (dest);
}
