#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to convert
 * Return: The integer value found in the string
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	int started = 0; /* To track if we've started collecting digits */

	/* Loop through characters */
	while (s[i] != '\0')
	{
		/* Count the '-' and '+' signs */
		if (s[i] == '-')
		{
			sign = sign * -1; /* Flip sign for every '-' */
		}
		else if (s[i] >= '0' && s[i] <= '9') /* Convert digits */
		{
			num = num * 10 + (s[i] - '0');
			started = 1; /* Mark we started extracting numbers */
		}
		else if (started) /* Stop if a non digit appears after number */
		{
			break;
		}
		i = i + 1; /* Move to next character */
	}
	return (num * sign); /* Apply sign and return result */
}
