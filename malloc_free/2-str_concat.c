#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_length - A helper function to find string length.
 * @str: The string to measure.
 * Return: Length of the string.
 */

int str_length(char *str)
{
	int len = 0;

	if (str == NULL /* Treat NULL as empty */)
	{
		return (0);
	}
	while (str[len] != '\0') /* Count chars */
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: Pointer to the newly allocated space in memory
 * containing s1 followed by s2 and '\0'. Otherwise,
 * return NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int total_size = str_length(s1) + str_length(s2) + 1;
	int i = 0; /* Index loop for s1 */
	int j = 0; /* Index loop for s2 */
	char *new_str;

	/* Allocate memory for the new string */
	new_str = malloc(total_size * sizeof(char));

	if (new_str == NULL) /* Check if malloc failed */
	{
		return (NULL);
	}
	if (s1 != NULL) /* Copy s1 into new_str */
	{
		while  (s1[i] != '\0') /* Copy each char */
		{
			new_str[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL) /* Copy s2 into new_str */
	{
		while (s2[j] != '\0') /* Copy each char */
		{
			new_str[i] = s2[j];
			i++;
			j++;
		}
	}
	new_str[i] = '\0'; /* Add null terminator at the end */

	return (new_str);
}
