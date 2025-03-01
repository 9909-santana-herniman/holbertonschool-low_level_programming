#include "main.h"

/**
 * _strcpy - A function that copies the string pointed to by src,
 * including the terminating null byte to the buffer pointed to by dest.
 *
 * @dest: 
 * @src:
 * Return:
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0') /* Copy characeters until null terminator */
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0'; /* Ensure null terminator is copied */

	return dest; /* Return pointer to destination buffer */
}
