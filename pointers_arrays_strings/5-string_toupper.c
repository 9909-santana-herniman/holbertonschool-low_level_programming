#include "main.h"

/**
 * string_toupper - A function that changes all lowercase
 * letters of a string to uppercase.
 * @s: Pointer to input string.
 * Return: Pointer to modified string.
 */

char *string_toupper(char *s)
{
	int i = 0;

	/* Loop through each character in the string */
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z') /* Check if character is lowercase */
		{
			s[i] = s[i] - ('a' - 'A'); /* Convert to uppercase */
		}
	i++;
	}
	return (s); /* Return the modified string */
}
