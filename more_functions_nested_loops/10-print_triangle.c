#include "main.h"

/**
 * print_triangle - A function that prints a triangle, followed by a new line
 * @size: Size of triangle
 * Return: Void
 */

void print_triangle(int size)
{
	int rows = 1;

	/* Check if size is 0 or less, print new line */
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* Outer loop - controls the rows */
		while (rows <= size)
		{
			int spaces = size - rows;
			int hashes = rows;

		/* Calculates the number of spaces to print before '#' */
			while (spaces > 0)
			{
				_putchar(' ');
				spaces--;
			}
		/* Prints '#' equal to the row number */
			while (hashes > 0)
			{
				_putchar('#');
				hashes--;
			}
			_putchar('\n');
			rows++;
		}
	}
}
