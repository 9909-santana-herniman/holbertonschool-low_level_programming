#include "main.h"

/**
 * print_rev - A function that prints a string,
 * followed by a new line.
 * @s: The string to be printed
 * Return: Void
 */

void print_rev(char *s)
{
	char *start = s; /* Store the origninal position */

	/* A loop to find the null terminator */
	while (*s != '\0') /* '*s' points to first character */
	{
		s++;
	}
	s--; /* Move one step back to last character of string*/
	while (s >= start) /* Print down to the first character */
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n'); /* Print new line */
}
