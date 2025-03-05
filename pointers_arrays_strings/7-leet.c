#include "main.h"

/**
 * leet - A function that encodes a string into 1337.
 * @s: The input string to be encoded.
 * Return: The encoded string.
 */

char *leet(char *s)
{
	int i = 0;
	int replace;
	char letters[] = "aAeEoOtTlL";
	char replacements[] = "4433007711";

	while (s[i] != '\0')
	{
		replace = 0;

		while (letters[replace] != '\0')
		{
			if (s[i] == letters[replace])
			{
				s[i] = replacements[replace];
				break;
			}
		replace++;
		}
	i++;
	}
	return (s);
}
