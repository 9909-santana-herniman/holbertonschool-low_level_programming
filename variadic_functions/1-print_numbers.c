#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 * @separator: A string to be printed between numbers.
 * @n: Number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers; /* Variable to store the list of numbers  */
	unsigned int num_list = 0; /* To store each number */
	unsigned int i = 0; /* Loop counter */

	va_start(numbers, n); /* Initialise the numbers list */

	/* If no arguments, print new line and return */
	if (n == 0)
	{
		printf("\n");
		return;
	}

	/* Print the first number before entering the loop */
	if (n > 0)
	{
		num_list = va_arg(numbers, unsigned int); /* Get first number */
		printf("%d", num_list); /* Print first number */
	}

	/* Loop through remaining numbers */
	/* By stopping at n - 1, the separator prints only between numbers */
	while (i < n - 1)
	{
		/* Get next number */
		num_list =  va_arg(numbers, unsigned int);
		if (separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", num_list);
		i++;
	}
	va_end(numbers); /* Clean up argument list */

	printf("\n"); /* Print new line */
}
