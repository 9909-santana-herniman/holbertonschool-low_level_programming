#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist; /* List to hold variable arguments */
unsigned int i; /* Counter for the loop */

/* Initialise the 'va_list' to retrieve arguments */
va_start(valist, n);

/* Iterate through the numbers */
 for (i = 0; i < n; i++)
{
/* Print the current number */
printf("%d", va_arg(valist, int));

/* Print the separator if provided and not the last number */
if (separator && i < n - 1)
printf("%s", separator);
}
/* Print a new line at the end */
printf("\n");

/* Clean up the 'va_list' */
va_end(valist);
}
