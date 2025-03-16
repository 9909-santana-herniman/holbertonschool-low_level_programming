#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - A function that allocates memory
 * using malloc.
 * @b: The number of bytes to allocate
 * Return: A pointer to allocated memory, if malloc fails,
 * it exits with status 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Try to allocate memory of size 'b' */
	ptr = malloc(b);

	/* If malloc fails, terminate the program */
	if (ptr == NULL)
	{
		exit(98); /* Stops program immediately */
	}
	return (ptr);
}
