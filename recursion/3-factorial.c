#include "main.h"

/**
 * factorial - A function that returns the factorial
 * of a given number.
 * @n: Finding factorial of input 'n'.
 * Return: If less than 0 return -1, if 0 return 1,
 * otherweise return factorial of n - 1.
 */

int factorial(int n)
{
	if (n < 0) /* Indicate error if function less than 0 */
	{
		return (-1);
	}

	/* Base case */
	if (n == 0) /* If n equal to 0, stop recursion call */
	{
		return (1);
	}
	return (n * factorial(n - 1)); /* Reduce n - 1 for each step */
}
