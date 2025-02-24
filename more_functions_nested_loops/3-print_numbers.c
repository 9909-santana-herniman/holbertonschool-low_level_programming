#include "main.h"

/**
 * print_numbers - A function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * @: No parameters
 */

void print_numbers(void)
{
	int n;

	while ((n >= '0') && (n <= '9'))
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
