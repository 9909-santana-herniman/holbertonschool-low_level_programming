#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare and initailise a char array */
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	/* Initialise an int index to 0 */
	int i = 0;
	
	/* Loop while the current char is NOT null terminator */
	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++; /* Increment to move to next character */
	}
	/* This prints a new line */
	putchar('\n');

	return (0);
}
