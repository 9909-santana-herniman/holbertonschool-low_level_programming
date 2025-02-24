#include "main.h"

/**
 * more_numbers - A function that prints 10 times the numbers
 * from 0 to 14, followed by a new line.
 *
 * @: No parameters
 */

void more_numbers(void)
{
	int reps = 0;
	int n = 0;

	while (reps < 10)
	{
		n = 0;
			while (n <= 14)
			{
				if (n >= 10)
				{
					_putchar((n / 10) + '0');
				}
				_putchar((n % 10) + '0');
				n++;
			}
		_putchar('\n');
		reps++;
	}
}
