#include "main.h"
#include <limits.h> /* For CHAR_BIT */

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit, starting from 0.
 * Return: 1 if it worked, or -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int total_bits; /* Total number of bits in 'n' */
	/* Create a mask with only the bit at 'index' set */
	unsigned long int bit_mask = 1UL << index;


	/* Calculate the maximum number of bits in n */
	total_bits = sizeof(unsigned long int) * CHAR_BIT;

	/* Check if the index is out of range */
	if (index >= total_bits)
	{
		return (-1);
	}

	/* Use bitwise OR to set the bit in *n */
	*n |= bit_mask;

	return (1); /* Indicate success */
}
