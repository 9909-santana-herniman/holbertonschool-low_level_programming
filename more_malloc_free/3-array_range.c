#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The starting integer value.
 * @max: The ending integer value.
 * Return: Pointer to the newly allocated array or NULL if it fails.
 */

int *array_range(int min, int max)
{
	int *arr;      /* Pointer to hold the allocated array */
	int size, i;   /* Variables for array size and iteration */

	/* If min is greater than max, return NULL (invalid range) */
	if (min > max)
	{
		return (NULL);
	}

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array using malloc */
	arr = malloc(sizeof(int) * size);

	/* If malloc fails, return NULL */
	if (arr == NULL)
	{
		return (NULL);
	}

	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	/* Return pointer to the newly created array */
	return (arr);
}
