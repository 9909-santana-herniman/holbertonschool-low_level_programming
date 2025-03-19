#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 * @separator: A string to be printed between numbers.
 * @n: Number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers; /* Variable to store the list of arguments */
	unsigned int num_list = 0; /* To store each argument */
	unsigned int i = 0; /* Loop counter */

	va_start(numbers, n); /* Initialise the argument list */

	/* */
	num_list = va_arg(numbers, unsigned int);
	printf("%d", num_list);

	while (i < n)
	{
		num_list =  va_arg(numbers, unsigned int);
		if (separator != NULL)
		{
		printf("%s", separator);
		}
		printf("%d", num_list);
		i++;
	}
	va_end(numbers);

	printf("\n");
}
