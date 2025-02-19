#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Assign a random number to the n variable
 *
 * Return: Positive, Negative or Zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* if the number is zero*/
	if (n == 0)
	{
		printf("%u is zero\n", n);
	}
	/* if the number is greater than zero*/
	else if (n > 0)
	{
		printf("%u is positive\n", n);
	}
	/*if the number is less than 0*/
	else
	{
		printf("%u is negative\n", n);
	}

	return (0);
}
