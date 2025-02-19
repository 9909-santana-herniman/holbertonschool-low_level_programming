#include <stdio.h>

/**
 * main - Print all letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
	if (lowercase != 'q' && lowercase != 'e') /* Skip the letters q and e */
	{
		putchar(lowercase);
	}
	lowercase++;
	}

	putchar('\n');
	return (0);
}
