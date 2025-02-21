#include "main.h"

/**
 * _abs - A function that computes the absolute value of an integer
 * @n: parameter is a integer
 * Return: Always 0 (Success
 */

int _abs(int n)
{
	if (n < 0) /* check if n is less than zero */
	{
		return (n * -1); /* if true, use absolute value formula */
	}
	else
	{
		return (n); /* otherwise, return zero or positive number */
	}
}
