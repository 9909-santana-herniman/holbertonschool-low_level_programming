#include "main.h"

/**
 * rev_string - A function that reverse a string
 * @s: The string to be printed
 * Return: Void
 */

void rev_string(char *s)
{
	int length = 0;
	int firstChar;
	int lastChar;
	char temp;

	/* Find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Set up indexes for swapping */
	firstChar = 0;
	lastChar = length - 1;

	/* Swap characters */
	while (firstChar < lastChar)
	{
		temp = s[firstChar];
		s[firstChar] = s[lastChar];
		s[lastChar] = temp;
		firstChar++; /* Move forward */
		lastChar--; /* Move backward */
	}
}
