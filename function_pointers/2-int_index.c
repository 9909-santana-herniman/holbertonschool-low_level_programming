#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - A function that searches for an integer.
 * @array: Array of integers to search.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function used to compare values.
 * Return: Index of the first element for which the cmp
 * function returns a non-zero value, return -1
 * if no elements matches, if size <= 0, if the array
 * or cmp is NULL.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (0);
}
