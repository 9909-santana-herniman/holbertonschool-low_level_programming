#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Determine positive, negative, or zero result
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* If the number is equal to zero */
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	/* If the number is greater than zero */
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/* If the number is less than 0 */
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
