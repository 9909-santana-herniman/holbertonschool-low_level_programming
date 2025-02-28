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

	while (str[i] != '\0') /* Loop through characters */
	{
		if (i % 2 == 0) /* Check if 'i' is even indexed */
		{
			_putchar(str[i]);
		}
		i = i + 1;
	}
	_putchar('\n'); /* Followed by new line */
}
