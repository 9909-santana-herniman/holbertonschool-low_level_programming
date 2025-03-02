#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: Pointer to destination array
 * @src: The string to be appended
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest; /* Pointer to keep track of the start of dest */
	
	/* Move ptr to the end of dest to find where to append src */
	while (*ptr)
	{
		ptr = ptr + 1;
	}
	/* Copy each character from src to the end of dest */
	while (*src)
	{
		*ptr++ = *src++; /* Copy character and move pointer forward */
	}
	/* Add null terminator at the end of the new string */
	*ptr = '\0';

	return (dest); /* Return the pointer to the destination string */
}
