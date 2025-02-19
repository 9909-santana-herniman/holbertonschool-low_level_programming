#include <stdio.h>

/**
 * main - Print the alphabet in lowercase, the uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	
	char lowercase = 'a';
	char uppercase = 'A';

	while(lowercase <= 'z' && uppercase <= 'Z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while(uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
