#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet in lowercase multiplied by 10
 * @void: parameter is void
 * Return: void
 */

/* Function to print the alphabet in lowercase */
void print_alphabet_x10(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase = lowercase + 1;
	}
	_putchar('\n');
}
