#include "main.h"

/**
 * times_table - A function that prints the 9 times table, starting from 0
 * @: No parameters
 * Return: No return
 */

void times_table(void)
{	/* r = row, c = column, result stores sum of multiplication*/
	int r = 0, c = 0, result;

	while (r <= 9) /* Outer loop */
	{
		c = 0; /* Resets column to 0 at the start of each row */

		while (c <= 9) /* Inner loop */
		{
			result = r * c; /* Multiply row by columns */
			if (c == 0)
			{
				_putchar(result + '0');
			}
			else if (result < 10) /* Print single digit */
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else /* Print double digit */
			{
				_putchar(' ');
				_putchar((result / 10) + '0'); /* Tens */
				_putchar((result % 10) + '0'); /* Ones */
			}
				/* If not the last c, print ',' and ' ' */
				if (c < 9)
				{
					_putchar(',');
				}
			c++;
		}
		_putchar('\n');
		r++;
	}
}
