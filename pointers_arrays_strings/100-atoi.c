#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to convert
 * Return: The integer value found in the string
 */

int _atoi(char *s)
{
	int i = 0; /* Index loop variable */
	int sign = 1;
	int endResult = 0;
	int started = 0; /* To track if we've started collecting digits */

	/* Loop through characters */
	while (s[i] != '\0')
	{
		/* Handle the '-' */
		if (s[i] == '-')
		{
			if (!started) /* Only adjust sign before number starts */
			sign = sign * -1; /* Flip sign for every '-' */
		}
		else if (s[i] >= '0' && s[i] <= '9') /* Convert digits */
		{
			started = 1;
			endResult = endResult * 10 + (s[i] - '0');
		}
		else if (started)
		{
			return (endResult * sign);
		}

		i = i + 1; /* Move to next character */
	}
	return (endResult * sign); /* Apply sign and return result */
}
