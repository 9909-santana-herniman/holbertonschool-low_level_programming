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
	int printed = 0; /* Flag to track if a value has been printed */
	char *string_value; /* Pointer for string arguments */

	va_start(anything, format); /* Initialise the argument list */

	while (format && format[i]) /* Loop through format string */
	{
		if (printed) /* Print separator before next value */
			printf(", ");

		switch (format[i]) /* Process each format specifier */
		{
			case 'c': /* Print a character */
			/* char promoted to int in variadic arguments */
				printf("%c", va_arg(anything, int));
				printed = 1;
				break;
			case 'i': /* Print an integer */
				printf("%d", va_arg(anything, int));
				printed = 1;
				break;
			case 'f': /* Print a float */
			/* float promoted to double in variadic arguments */
				printf("%f", va_arg(anything, double));
				printed = 1;
				break;
			case 's': /* Print a string */
				string_value = va_arg(anything, char *);
				if (string_value == NULL)
					string_value = "(nil)";
				printf("%s", string_value);
				printed = 1;
				break;
		}
	i++;
	}
	va_end(anything);
	printf("\n");
}
