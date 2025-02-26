#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c; /* Temporary int variable to hold one value during swap */
	c = *a; /* Store the value pointed by a into c */
	*a = *b; /* Replace the value pointed at a with b */
	*b = c; /* Store the value of c (which is a) into b */
}
