#include "main.h"

/**
 * print_most_numbers - A function that prints the numbers from 0 to 9,
 * followed by a new line.
 * @: No parameters
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9) /* Loop through 0 to 9 */
	{
		if (n != 2 && n != 4) /* Check if n is not 2 or 4 */
		{
			_putchar(n + '0'); /* Print current number */
		}
		n++; /* Move to next number by 1 */
	}
	_putchar('\n'); /* End of loop, print new line */
}
