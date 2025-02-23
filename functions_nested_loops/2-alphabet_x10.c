#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet in lowercase multiplied by 10
 * @: parameter is void
 * Return: void
 */

void print_alphabet_x10(void)
{
	int reps = 0; /* Track the reps of printed alphabet */
	char letter; /* The range of letters */

	/* Using a nested loop */
	/* Outer loop */
	while (reps < 10)
	{
		letter = 'a'; /* Set letter to a */

		/* Inner loop */
		while (letter <= 'z')
		{
			_putchar(letter); /* Print current letter */
			letter++; /* Increment letter by 1 */
		}
	_putchar('\n'); /* Display new line */
	reps++; /* Increment reps by 1 */
	}
}
