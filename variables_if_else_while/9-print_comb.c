#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Using ASCII to determine base 10 digits */
	int n = 48;
	/* Loop iterates through the numbers from 48 to 57 */
	while (n <= 57)
	{
		putchar(n);
	/* Is the current number n not equal to 57 */
	if (n != 57)
	{
		putchar(44); /* Insert comma */
		putchar(32); /* Insert space */
	}
	n++; /* Increment number by 1 */
	}

	putchar('\n');
	return (0);
}
