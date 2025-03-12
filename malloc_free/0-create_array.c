#include "main.h"
#include <stdlib.h>


/**
 * create_array - A function that creates an array of chars,
 * and initialises it with a specific char.
 * @size: Number of characters to allocate space for.
 * @c: The character to initialise each element for the array with.
 * Return: Pointer to allocated initialised array.
 * If size is 0 or malloc fails, return NULL.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i; /* Variable to loop through array */
	char *arr; /* Pointer to hold the dynamically allocated array */

	/* Allocate memory for 'size' number of characters */
	arr = malloc(size * sizeof(char));

	/* Check if size is 0 or  malloc failed */
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}

	/* Loop through each index of the allocated array */
	for (i = 0; i < size; i++)
	{
		arr[i] = c; /* Assign the character 'c' to each index */
	}

	return (arr); /* Return pointer to allocated init array */
}
