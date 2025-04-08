#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get
 * from 'n' to 'm'.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits that differ between n and m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result; /* Store result of n XOR m */
	unsigned int count = 0; /* Keeps track of the number of bits to flip */

	/* Perform XOR to find differing bits */
	xor_result = n ^ m;

	/* Count the number of set bits in xor_result */
	while (xor_result > 0)
	{
		count += xor_result & 1; /* Check if LSB is set */
		xor_result >>= 1; /* Shift right by one bit */
	}

	return (count);
}
