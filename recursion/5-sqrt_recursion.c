#include "main.h"

/**
 * _sqrt_helper_function - Helper function to find the
 * natural square root of a number.
 * @n: Input number for which we trying to find the sqaure root.
 * @x: Current guess for the square root.
 * Return: Square root of n it it exists, otherwise -1 if n does
 * not have a natural square root.
 */

int _sqrt_helper_function(int n, int x)
{
	/* If true, we found square root */
	if (x * x == n)
	{
		return (x);
	}
	/* If true, no natural square root exists */
	if (x * x > n)
	{
		return (-1);
	}
	/* Recursively try the next number */
	return (_sqrt_helper_function(n, x + 1));
}

/**
 * _sqrt_recursion - A function that returns the natural
 * square root of a number.
 * @n: Number to find square root of.
 * Return: Square root of n, otherwise -1 if none exists.
 */

int _sqrt_recursion(int n)
{

	/* If n is negative, it does not return a natural sqrt */
	if (n < 0)
	{
		return (-1);
	}
	/* Start checking from 0 */
	return (_sqrt_helper_function(n, 0));
}
