#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 * @void: parameter is void
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a'; /* declare starting point a */

	while (letter <= 'z') /* while letter is less than or equal to z */
	{
		_putchar(letter); /* display current letter */
		letter++; /* increment letter by 1 */
	}
	_putchar('\n'); /* followed by new line */
}
