#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initialises it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 * Return: Pointer to allocated memory or NULL if failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i; /* Variable for looping through memory */
	char *ptr; /* Pointer to the allocated memory */

	/* Check for invalid inputs */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Dynamically allocate memory for the array */
	ptr = malloc(nmemb * size);
	/* Check if malloc fails */
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Initialise memory to 0, since malloc does not */
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	/* Return the pointer to the allocated memory */
	return (ptr);
}
