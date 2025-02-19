#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Used ASCII characters instead of zero or nine */
	int n = 48;

	while (n <= 57) /* Iterate from 48 to 57 */
	{
		putchar(n); /* Print current number */
		n++; /* Increment to next number */
	
	}
	putchar('\n'); /* Followed by a newline */
	return (0);
}
