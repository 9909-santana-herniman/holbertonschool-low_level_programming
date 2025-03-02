#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to convert
 * Return: The integer value found in the string
 */

int _atoi(char *s)
{
	int i = 0; /* Index loop variable */
	int sign = 1; /* Keeps track of positive or negative */
	int endResult = 0; /* Stores the final number*/
	int started = 0; /* To track if we've started collecting digits */

	/* Loop through characters in the string */
	while (s[i] != '\0')
	{
		/* Handle the '-' */
		if (s[i] == '-')
		{
			if (!started) /* Only adjust sign before number starts */
			sign = sign * -1; /* Flip sign for every '-' */
		}
		/* If it's a digit, convert it to an integer */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1; /* Started collecting digits */
			endResult = endResult * 10 + (s[i] - '0');
		}
		/* If a non-digit after starting, stop collecting */
		else if (started)
		{
			return (endResult * sign);
		}

		i = i + 1; /* Move to next character */
	}
	return (endResult * sign); /* Apply sign and return final result */
}
