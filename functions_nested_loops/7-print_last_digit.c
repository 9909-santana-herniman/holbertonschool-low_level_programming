#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: Parameter is an integer
 * Return: Value of last digit
 */

int print_last_digit(int n)
{
	if ((n == 0) || (n > 0))
	{
		return (n % 10);
	}
	else
	{
		return ((n % 10) * -1);
	}
	_putchar(n);
}
