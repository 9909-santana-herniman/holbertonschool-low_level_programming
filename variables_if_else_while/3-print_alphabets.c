#include <stdio.h>

/**
 * main - Print the alphabet in lowercase, the uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare and initialise both lower and upper case letters starting with a */
	char lowercase = 'a';
	char uppercase = 'A';

	/* While both lower and upper case are less than z */
	while (lowercase <= 'z')
	{
		putchar(lowercase); /* Print current letter */
		lowercase++; /* Increment to next letter */
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase); 
		uppercase++;
	}
	putchar('\n');
	return (0);
}
