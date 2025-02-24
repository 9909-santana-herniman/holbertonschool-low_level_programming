#include "main.h"

/**
 * print_numbers - A function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * @: No parameters
 */

void print_numbers(void)
{
	int n = 0; /* n represents the number */

	while (n <= 9) /* Loop through 0 to 9 */
	{
		_putchar(n + '0'); /* Print each number */
		n++; /* Move to next number by 1 */
	}
	_putchar('\n'); /* End of loop, print new line */
}
