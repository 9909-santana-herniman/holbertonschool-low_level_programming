#include "main.h"

/**
 * print_square - A function that prints a square, followed by a new line
 * @size: Parameter representing the length of the square
 * Return: Voide
 */

void print_square(int size)
{
	int rows = 0;
	int columns = 0;

	/* Check if the size is 0 or less */
	if (size <= 0)
	{
		_putchar('\n'); /* Print new line */
	}
	else
	{
		/* Outer loop runs once per row (size times) */
		while (rows < size)
		{
			columns = 0;
		/* Inner loop runs once per column (size times each row) */
			while (columns < size)
			{
				_putchar('#');
				columns++;
			}
			_putchar('\n'); /* New line after inner loop finishes */
			rows++;
		}
	}
}
