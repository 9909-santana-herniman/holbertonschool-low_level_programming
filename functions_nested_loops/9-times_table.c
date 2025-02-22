#include "main.h"

/**
 * times_table - A function that prints the 9 times table, starting from 0
 * @: No parameters
 * Return: No return
 */

void times_table(void)
{
	int row = 0;
	int column = 0;
	int result;

	while (row <= 9)
	{
		column = 0;

		while (column <= 9)
		{
			result = row * column;

				if (column == 0)
				{
					_putchar(result + 48);
				}
				else if (result < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar(result + 48);
				}
				else
				{
					_putchar(32);
					_putchar((result / 10) + 48);
					_putchar((result % 10) + 48);
				}
				if (column < 9)
				{
					_putchar(44);
				}
			column++;
		}
		_putchar('\n');
		row++;
	}
}
