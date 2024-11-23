#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: THe string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist; /* List to hold variable arguments */
unsigned int i; /* Counter for the loop */
char *str; /* Pointer to hold each string */

/* Initialise the 'va_list' to retrieve arguments */
va_start(valist, n);

/* Iterate through the strings */
for (i = 0; i < n; i++)
{
/* Retrieve the next string argument */
str = va_arg(valist, char *);
/* Print the string or "(nil)" if it is NULL */
if (str)
printf("%s", str);
else
printf("(nil)");

/* Print the separator if provided and not the last string */
if (i < n - 1)
if (separator)
printf("%s", separator);
}
/* Print a new line at the end */
printf("\n");

/* Clean up the 'va_list' */
va_end(valist);
}
