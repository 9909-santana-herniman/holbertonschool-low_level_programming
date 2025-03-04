#include "main.h"

/**
 * cap_string - A function that capitalises the first letter
 * of each word in a string.
 * @s: The input string.
 * Return: The modified string.
 */

char *cap_string(char *s)
{
	int i = 0;
	char separators[] = " \t\n,.!?\"(){}";
	int sep_count;

	while (s[i] != '\0')
	{
		sep_count = 0;

		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}

		while (separators[sep_count] != '\0')
		{
			if (i > 0 && s[i - 1] == separators[sep_count])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
				}
			}
		sep_count++;
		}
	i++;
	}
	return (s);
}
