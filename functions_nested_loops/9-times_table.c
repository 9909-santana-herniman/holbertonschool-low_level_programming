#include "main.h"

/**
 * times_table - A function that prints the 9 times table, starting from 0
 * @: No parameters
 * Return: No return
 */

void times_table(void)
{
	int r = 0; /* r - row */
	int c = 0; /* c - column */
	int result; /* Stores the sum of r times c */

	while (r <= 9) /* Loops through 0 to 9 */
	{
		c = 0; /* Resets column to 0 at the start of each row */

		while (c <= 9)
		{
			result = r * c;
				/* First c of the r */
				if (c == 0)
				{
					_putchar(result + '0');
				}
				/* If result is a single digit (0-9) */
				else if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				/* If result is a two digit number */
				else
				{
					_putchar(' ');
					/* Prints first digit */
					_putchar((result / 10) + '0');
					/* Prints second digit */
					_putchar((result % 10) + '0');
				}
				/* If not the last c, print ',' and ' ' */
				if (c < 9)
				{
					_putchar(',');
				}
			c++; /* Move to next c by 1*/
		}
		_putchar('\n'); /* Print new line */
		r++; /* Move to next r by 1 */
	}
}
