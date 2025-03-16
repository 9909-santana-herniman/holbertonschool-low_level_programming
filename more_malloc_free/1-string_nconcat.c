#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to take from s2.
 * Return: Pointer to concatenated string. If malloc fails, return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0; /* String length index */
	unsigned int i, j; /* New string loop indexes */
	char *concat_str; /* Declare pointer */

	if (s1 == NULL) /* Treat NULL strings as empty */
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0') /* Find the length of s1 */
		len1++;

	while (s2[len2] != '\0') /* Find the length of s2 */
		len2++;

	if (n >= len2)
		n = len2;

	/* Allocate memory for the new string (+1 for the null terminator) */
	concat_str = malloc(sizeof(char) * (len1 + n + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++) /* Copy s1 into new string */
		concat_str[i] = s1[i];

	for (j = 0; j < n; j++) /* Copy first  n bytes of s2 to new string */
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0'; /* Null terminate the new string */
	return (concat_str);
}
