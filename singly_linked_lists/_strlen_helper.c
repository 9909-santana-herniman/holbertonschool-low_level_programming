#include "lists.h"

/**
 * _strlen - Calulates the length of a string manually.
 * @s: The string whose length is to be counted.
 * Return: The length of the string.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len] != '\0') /* Loop until we reach '\0' */
	{
		len++;
	}
	return (len);
}


