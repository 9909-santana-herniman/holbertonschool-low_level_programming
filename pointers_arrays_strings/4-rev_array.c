#include "main.h"

/**
 * reverse_array - A function that reverses the content
 * of an array of integers.
 * @a: Pointer to the integer array.
 * @n: Number of elements in the array.
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int first_index = 0; /* Start of array */
	int last_index = n - 1; /* End of array */
	int temp; /* Temp variable for swapping */

	/* Swap elements from both ends, moving towards the center */
	while (first_index < last_index)
	{
		/* Swap the elements */
		temp = a[first_index];
		a[first_index] = a[last_index];
		a[last_index] = temp;

		/* Move indexes towards the center */
		first_index++; /* --> */
		last_index--; /* <-- */
	}
}
