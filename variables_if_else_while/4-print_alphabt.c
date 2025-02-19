#include <stdio.h>

/**
 * main - Print all letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Print all letters in lowercase characters */
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
	/* Checks if current letter is not equal to q or e */
	if (lowercase != 'q' && lowercase != 'e')
	{
		putchar(lowercase);
	}
	lowercase++;
	}

	putchar('\n');
	return (0);
}
