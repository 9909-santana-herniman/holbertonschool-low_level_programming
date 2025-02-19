#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0x30;
	char letters = 0x61;

	while (n <= 0x39)
	{
		putchar(n);
		n++;
	}
	while (letters <= 0x66)
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
