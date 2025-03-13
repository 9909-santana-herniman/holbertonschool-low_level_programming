#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: String to be duplicated.
 * Return: Pointer to duplicated string.
 */

char *_strdup(char *str)
{
	char *dup; /* Pointer to store the duplicated string */
	int i; /* Loop index */
	int len = 0; /* Store length of string */

	/* Check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Find the length of the string */
	while ((str[len]) != '\0')
	{
		len = len + 1;
	}

	/* Allocate memory for the duplicate string (+1 for the '\0') */
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	/* Copy the string to the newly allocated memory */
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);

}
