#include "main.h"

/**
 * _pow_recursion - A function that returns the value
 * of 'x' raised to the power of 'y'.
 * @x: Number to be raised to the power y.
 * @y: The exponent to which x will be raised.
 * Return: If less than 0, return -1, if equal to zero, return 0,
 * otherwise return value of recursive call.
 */

int _pow_recursion(int x, int y)
{
	/* Check if y is less 0, as per requirment */
	if (y <  0)
	{
		return (-1);
	}

	/* Base case - stop recursive call if y is equal to 0 */
	if (y == 0)
	{
		return (1);
	}
	/* Recursive case - multiply x by function with y decreased by 1 */
	return (x * _pow_recursion(x, y - 1));
}
