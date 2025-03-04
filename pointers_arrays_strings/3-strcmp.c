#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 * Return: If equal 0, positive if s1 is greater,
 * negative if s1 is less.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0; /* Index to iterate through characters */

	/* Loop through both strings, while neither has reached '\0' */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i]) /* If not equal, return difference */
		{
			return (s1[i] - s2[i]); /* Returns ASCII difference */
		}
		else
		{
			i++; /* Move to next character */
		}
	}
	/* If loop stops at '\0' or when characters differ, */
	/* return the difference between the characters at the stop point */
	return (s1[i] - s2[i]);
}
