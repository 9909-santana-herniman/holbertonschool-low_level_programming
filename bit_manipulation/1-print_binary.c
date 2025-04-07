#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int print_start = 0; /* Track if we started printing */
	/* Initialise mask with MSB set */
	unsigned long int bit_mask = 1UL << (sizeof(n) * 8 - 1);

	/* Iterate through all bits from MSB to LSB */
	while (bit_mask > 0)
	{
		/* Check if current bit is set using bitwise AND */
		if (n & bit_mask)
		{
			_putchar('1'); /* Print '1' if the bit is set */
			print_start = 1; /* Start printing once we find '1' */
		}
		else if (print_start)
		{
			_putchar('0'); /* Print '0' only after started printing */
		}
		/* Shift bit_mask one position to the right */
		bit_mask >>= 1;
	}
	/* If no bits were set, print '0' */
	if (!print_start) /*Has printing not started yet? */
	{
		_putchar('0');
	}
}
