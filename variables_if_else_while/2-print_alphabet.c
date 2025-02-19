#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare and initailise a char array */
	char lowercase = 'a';

	/* Loop while the current letter is less than or equal to z */
	while (lowercase <= 'z')
	{
		putchar(lowercase); /* Print the current letter */
		lowercase++; /* Increment the letter to move to next */
	}

	/* This prints a new line */
	putchar('\n');
	return (0);
}
