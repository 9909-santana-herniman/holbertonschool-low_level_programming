#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - A function that executes a function given as a parameter
 * on each element on an array.
 * @array: Array of integers to process.
 * @size: Number of elements in the array.
 * @action: Pointer to the function needed.
 *
 * Description: This function loops through the array and calls the
 * function pointed to by 'action' on each element. If 'array' or
 * 'action' is NULL, the function does nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Use unsigned int since size_t is unsigned  */
	unsigned int i;

	if (array == NULL) /* Check array and action is NULL to avoid errors */
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}

	/* Loop through the array and apply the function to each element */
	for (i = 0; i < size; i++)
	{
		action(array[i]); /* Call function with current element */
	}
}
