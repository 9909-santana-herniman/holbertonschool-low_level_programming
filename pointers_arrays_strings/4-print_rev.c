#include "main.h"

/**
 * print_rev - A function that prints a string,
 * followed by a new line.
 * @s: The string to be printed
 * Return: Void
 */

void print_rev(char *s)
{
	/* A loop to find the null terminator */
	while (*s != '\0')
	{
		s++;
	}
	/* A loop to find the last character of the string */
	/* Then print each character in reverse */
	while (*s - 1)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
