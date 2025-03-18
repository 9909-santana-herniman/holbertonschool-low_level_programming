#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: The number of arguments to add.
 * Return: If n == 0, return 0, otherwise return total sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers; /* Declare a variable to store the arguments */
	int sum = 0; /* Declare a variable to store the sum of all arguments */
	unsigned int i = 0; /* Loop index variable */

	/* Initialise numbers to point to the first variable argument */
	va_start(numbers, n);

	if (n == 0) /* Check if arguments is 0 */
	{
		return (0);
	}

	/* Loop through each argument */
	while (i < n)
	{
		/* Use va_arg to retrieve the next argument */
		sum = sum + va_arg(numbers, unsigned int);
		i++;
	}
	va_end(numbers); /* When finished, clean up list */
	return (sum);
}
