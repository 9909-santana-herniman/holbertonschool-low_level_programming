#include "main.h"

/**
 * _memset - A function that fills 'n' bytes of memory
 * area 's' with the byte 'b'.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill memory with.
 * @n: The number of bytes to fill.
 * Return: Pointer to the memory area 's'.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0; /* Loop counter */

	/* Loop through the memory block and set each byte to 'b' */
	while (i < n)
	{
		s[i] = b; /* Assign 'b' to the current byt in memory */
		i = i + 1; /* Move to the next byte */
	}
	return (s); /* Return the modified pointer */
}
