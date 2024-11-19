#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters.
 * @n: the number of arguments passed to the function.
 *
 * Description:
 * This function uses variadic arguments to calculate the sum of all
 * the integers passed to it. The function:
 * - Initialises a `va_list` to access the variable arguments.
 * - Iterates through the arguments and adds them together.
 * - Returns the total sum.
 *
 * Return:
 * - The sum of all its parameters.
 * - If `n` is 0, the function returns 0.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list valist;  /* Variable argument list to hold the arguments */
unsigned int i;  /* Loop counter */
int sum = 0;     /* Variable to store the sum */

/* If no arguments are passed, return 0 */
if (n == 0)
return (0);

/* Initialize the `va_list` to retrieve the arguments */
va_start(valist, n);

/* Iterate through the arguments and sum them up */
for (i = 0; i < n; i++)
sum += va_arg(valist, int); /* Retrieve the next argument */

/* Clean up the `va_list` */
va_end(valist);

return (sum); /* Return the calculated sum */
}
