#include "main.h"

/**
 * leet - A function that encodes a string into 1337.
 * @s: The input string to be encoded.
 * Return: The encoded string.
 */

char *leet(char *s)
{
	int i = 0; /* Start at the first character of the string */
	int rep; /* Check each letter to replace */
	char letters[] = "aAeEoOtTlL"; /* List of letters that to convert */
	char replace[] = "4433007711"; /* List of numbers to replace letters*/

	/* Loop through each character in the string until we reach null */
	while (s[i] != '\0')
	{
		rep = 0; /* Rest rep to check the letters each time */

		/* Check if current character matches any letter to replace */
		while (letters[rep] != '\0')
		{
			/* If character matcher on to replace */
			if (s[i] == letters[rep])
			{
				/* Replace character with number */
				s[i] = replace[rep];
				break; /* Once a match found, stop checking */
			}
		rep++; /* Check next letter in the letters[] array */
		}
	i++; /* Move to next character in the string */
	}
	return (s);
}
