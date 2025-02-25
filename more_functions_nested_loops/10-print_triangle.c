#include "main.h"

/**
 * print_triangle - A function that prints a triangle, followed by a new line
 * @size: Size of triangle
 * Return: Void
 */

void print_triangle(int size)
{
	int rows = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (rows <= size)
		{
			int spaces = size - rows;
			int hashes = rows;

			while (spaces > 0)
			{
				_putchar(' ');
				spaces--;
			}

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
