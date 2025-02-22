#include "main.h"

/**
 * times_table - A function that prints the 9 times table
 * @: void
 * Return: output of 9 times table
 */

void times_table(void)
{
	int row = 0;
	int column = 0;
	int result;

	while (row < 10)
	{
		column = 0;
		while (column < 10)
		{
			result = row * column;
			if (result < 10)
			{
				_putchar(result + 48);
			}
			else
			{
				_putchar(result / 10 + 48);
				_putchar(result % 10 + 48);
			}
			if (column < 9)
			{
				_putchar(44);
				_putchar(32);
			}
			column++;
		}
		_putchar('\n');
		row++;
	}
}
