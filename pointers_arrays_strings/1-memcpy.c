#include "main.h"

/**
 * _memcpy - A function that copies 'n' bytes from
 * memory area 'src' to memory area 'dest'.
 * @dest: Pointer to the destination memory where
 * bytes will be copied.
 * @src: Pointer to the source memory where
 * bytes are copied from.
 * @n: The number of bytes to copy.
 * Return: Pointer to 'dest'.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0; /* Loop counter */

	/* Iterate through 'n' bytes and copy from 'src' to 'dest' */
	while (i < n)
	{
		dest[i] = src[i]; /* Copy byte from 'src' to 'dest' */
		i++; /* Move to the next byte */
	}
	return (dest);
}
