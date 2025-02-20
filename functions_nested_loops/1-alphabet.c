#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 * @void: parameter is void
 * Return: void
 */

/* Function to print the alphabet in lowercase */
void print_alphabet(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase = lowercase + 1;
	}
	_putchar('\n');
}
