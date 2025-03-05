#include "main.h"

/**
 * leet - A function that encodes a string into 1337.
 * @s: The input string to be encoded.
 * Return: The encoded string.
 */

char *leet(char *s)
{
	int i = 0;
	char a[] = {'a', 'A'};
	char e[] = {'e', 'E'};
	char o[] = {'o', 'O'};
	char t[] = {'t', 'T'};
	char l[] = {'l', 'L'};

	while (s[i] != '\0')
	{
		if (s[i] == a[0] || s[i] == a[1])
		{
			s[i] = '4';
		}
		else if (s[i] == e[0] || s[i] == e[1])
		{
			s[i] = '3';
		}
		else if (s[i] == o[0] || s[i] == o[1])
		{
			s[i] = '0';
		}
		else if (s[i] == t[0] || s[i] == t[1])
		{
			s[i] = '7';
		}
		else if (s[i] == l[0] || s[i] == l[1])
		{
			s[i] = '1';
		}
	i++;
	}
	return (s);
}
