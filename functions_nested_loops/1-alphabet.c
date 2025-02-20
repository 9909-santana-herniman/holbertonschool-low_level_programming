#include "main.h"

/**
 * main - Print the alphabet
 *
 * Return: Always 0 (Success)
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
	return;
}

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
