#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints 'n' elements
 * of an array of integers, followed by a new line.
 * @a: Pointer to an array
 * @n: The number of elements in the array
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i = 0; /* Index variable to start at first element of array */

	while (i < n) /* Loop through array */
	{
		printf("%d", a[i]); /* Print the number */
		if (i < n - 1) /* Print, only if it's NOT the last element */
		{
			_putchar(','); /* Print a comma */
			_putchar(' '); /* Print a space after comma */
		}
		i = i + 1; /* Move to next element in the array */
	}
	printf("\n"); /* Followed by a new line */
}
