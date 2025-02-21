#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet in lowercase multiplied by 10
 * @void: parameter is void
 * Return: void
 */

void print_alphabet_x10(void)
{
	int reps = 0; /* Use to keep track of reps of printed alphabet */
	char letter; /* The range of letters */

	/* Using a nested loop */
	while (reps < 10) /* less than 10 */
	{
		letter = 'a'; /* set letter to a */

		while (letter <= 'z') /* less than or equal to z */
		{
			_putchar(letter); /* display current letter */
			letter++; /* increment letter by 1 */
		}
	_putchar('\n'); /* display new line */
	reps++; /* increment reps by 1 */
	}
}
