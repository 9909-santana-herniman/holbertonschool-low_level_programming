#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - A function that prints strings, followed by a new line.
 * @separator: String to be printed between strings.
 * @n: The number of arguments to be passed throught the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list; /* Variable to hold arguments */
	char *strings; /* Pointer to store each string */
	unsigned int i = 0; /* Loop counter */

	va_start(string_list, n); /* Initialise to retrieve arguments */

	if (n == 0) /* Check if no arguments */
	{
		printf("\n");
		return;
	}

	/* Loop through all  arguments */
	while (i < n)
	{
		strings = va_arg(string_list, char *);

		/* If one of the string is NULL print (nil) */
		if (strings == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strings);
		}
	/* Check if separator is not NULL and not after the last stirng */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	i++;
	}
	va_end(string_list); /* Clean up list */

	printf("\n"); /* Print new line */
}
