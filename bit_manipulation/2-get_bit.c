#include "main.h"
#include <limits.h> /* For CHAR_BIT: the number of bits in a char */

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to check.
 * @index: The index of the bit, starting from 0.
 * Return: The value of the bit at given index, or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int total_bits; /* Total number of bits in 'n'*/
	unsigned long int shift_bit; /* Result after shifting */

	/* Calculate the maximum number of bits in n */
	total_bits = sizeof(unsigned long int) * CHAR_BIT;

	/* Check if the index is out of range */
	if (index >= total_bits)
	{
		return (-1); /* Error because index it too large */
	}

	/* Shift 'n' right by 'index' positions */
	shift_bit = n >> index;

	/* Isolate the least significant bit (LSB) */
	return (shift_bit & 1);
}
