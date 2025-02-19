#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print last digit, either greater than 5, is zero, or less than 6
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* n = random generated number */
	/* ld = last digit */
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	/* If last digit is greater than 5 */
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	/* If last digit is equal to zero */
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	/* If last digit is less than 6 */
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}

	return (0);
}
