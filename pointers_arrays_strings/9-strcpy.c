#include "main.h"

/**
 * _strcpy - A function that copies the string pointed to by src,
 * including the terminating null byte to the buffer pointed to by dest.
 *
 * @dest: The pointer to the destination array where content is to be copied
 * @src: This is the string to be copied
 * Return: Destination buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0; /* Index variable */ 

	while (src[i] != '\0') /* Copy characeters until null terminator */
	{
		dest[i] = src[i]; /* Copy each character from src to dest */
		i = i + 1;
	}
	dest[i] = '\0'; /* Ensure null terminator is copied */

	return dest; /* Return pointer to destination buffer */
}
