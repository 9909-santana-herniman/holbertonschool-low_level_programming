#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal
 * @n: A number integer
 * Return: Void
 */

void print_diagonal(int n)
{
	int line = 0;
	int spaces = 0;

	/* If n is 0 or negative, print new line */
	if (n <= 0)
	{
		_putchar('\n');
	}
	/* Otherwise, print diagonal line */
	else
	{
		while (line < n)
		{
			spaces = 0; /* Reset at the start of each line */
			while (spaces < line)
			{
				_putchar(' '); /* Print space before '\' */
				spaces++;
			}
			_putchar('\\'); /* Print diagonal slash */
			_putchar('\n'); /* Move to new line */
			line++;
		}
	}
}
