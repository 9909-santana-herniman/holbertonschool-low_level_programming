#include "main.h"

/**
 * puts2 - A function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: The string to be printed
 * Return: Void
 */

void puts2(char *str)
{
	int i = 0; /* Index variable */

	while (str[i] != '\0') /* If not null terminator */
	{
		_putchar(str[i]); /* Print every other character */
		i = i + 2; /* Skip the next one */
	}
	_putchar('\n'); /* Followed by new line */
}
