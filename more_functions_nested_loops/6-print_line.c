#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 * @n: An integer
 * Return: Void
 */

void print_line(int n)
{
	int line = 0;

	/* If n is 0 or negative, print new line */
	if (n <= 0)
	{
		_putchar('\n');
	}
	/* If line is less than n, print the line n times */
	else
	{
		while(line < n)
		{
			_putchar('_');
			line++;
		}
	_putchar('\n');
	}
}
