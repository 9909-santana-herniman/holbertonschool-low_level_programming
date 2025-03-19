#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - A function that prints anything.
 * @format: A string of format specifiers ('c' for char,
 * 'i' for int, 'f' for float, 's' for string).
 */

void print_all(const char * const format, ...)
{
	va_list anything; /* Store variadic arguments */
	int i = 0; /* Index for iterating through the format string*/
	char *string_value; /* Pointer for string arguments */
	char *separator = "";

	va_start(anything, format); /* Initialise the argument list */

	while (format && format[i]) /* Loop through format string */
	{
		/* Check if the current character is a valid type */
		if (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's')
		{
			printf("%s", separator);
			separator = ", "; /* Update to a comma and space */

		switch (format[i]) /* Process each format specifier */
		{
			case 'c': /* Print a character */
				printf("%c", va_arg(anything, int));
				break;
			case 'i': /* Print an integer */
				printf("%d", va_arg(anything, int));
				break;
			case 'f': /* Print a float */
				printf("%f", va_arg(anything, double));
				break;
			case 's': /* Print a string */
				string_value = va_arg(anything, char *);
				if (string_value != NULL)
					printf("%s", string_value);
				else
					printf("%s", "(nil)");
				break;
		}
		}
	i++;
	}
	va_end(anything);
	printf("\n");
}
