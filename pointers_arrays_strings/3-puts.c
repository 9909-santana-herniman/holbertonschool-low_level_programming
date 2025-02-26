#include "main.h"

/**
 * _puts - A function that prints a string,
 * followed by a new line, to stdout
 * @str: The string to be printed
 * Return: Void
 */

void _puts(char *str)
{
	/* The pointer 'str' already points to the first char of the string */
	/* The loop checks if the char is not the null character */
	while (*str != '\0')
	{
		_putchar(*str); /* Print each character */
		str++; /* Increment each character by 1 */
	}
	_putchar('\n'); /* Followed by a new line */
}
