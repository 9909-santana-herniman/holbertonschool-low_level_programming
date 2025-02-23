#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - A function that prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description:
 * - If n is greater than 98, it counts down to 98.
 * - If n is less than 98, it counts up to 98.
 * - Each number is printed, followed by a comma and space, except for 98.
 */

void print_to_98(int n)
{
	/* Check if number is greater than 98 */
	if (n >= 98) 
	{
	/* Loop to count down from n to 98, stops before 98 */
		while (n > 98)
		{
			printf("%d, ", n);
			n--; /* Decrease number by 1 */
		}
	}
	else
	{
	/* Loop to count up from n to 98, stops before 98 */
		while (n < 98)
		{
			printf("%d, ", n);
			n++; /* Increase number by 1*/
		}
	}
	printf("%d\n", 98); /* Print 98 and move to a new line */
}
