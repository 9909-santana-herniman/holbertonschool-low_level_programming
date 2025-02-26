#include "main.h"

/**
 * reset_to_98 - A function that takes a pointer to an int
 * as parameter and updates the value it points to, to 98.
 * @n: An integer number
 * Return: Void
 */

void reset_to_98(int *n)
{
	/* Only want to change the value of the pointer */
	*n = 98;
}
