#include "main.h"

/**
 * _puts_recursion - A function that prints a string,
 * followed by a new line.
 * @s: Pointer to character
 * Return: Void
 */

void _puts_recursion(char *s)
{
	/* Base case  */
	/* Stop recursive call once '\0' is reached */
	if (*s != '\0')
	{
		_putchar(*s); /* Print current character */
		_puts_recursion(s + 1); /* Moves to next character */
	}
	else
	{
		_putchar('\n'); /* Like 'puts', print new line */
	}
}
