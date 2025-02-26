#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: The string output
 * Return: The length of the string
 */

int _strlen(char *s)
{
	/* Keeps track of the string length */ 
	int len = 0;

	/* Iterate through the characters until null character */
	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);

	/* (s + len) - calculates the memory address
	 * of the len-th character in the string.
	 *
	 * *(s + len) - retrieves the character stored at the
	 * memory address calculated in previous step. */
}
