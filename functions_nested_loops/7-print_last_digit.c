#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: Parameter is an integer
 * Return: Value of last digit
 */

int print_last_digit(int n)
{
	/* ld = last digit */
	int ld = n % 10; /* Find last digit */

	if (n < 0) /* If number is negative*/
	{
		ld *= -1; /* Make it positive */
	}

	_putchar(ld + '0'); /* Print last digit as a character */
	return (ld); /* Return last digit as integer*/
}
