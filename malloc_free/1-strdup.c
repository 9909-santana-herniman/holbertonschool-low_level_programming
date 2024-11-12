#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - create a copy of the string of the given parameter.
 * @str: given string.
 * Return: pointer of the array, or NULL if it fails.
 */
char *_strdup(char *str)
{
char *result;
unsigned int i, j;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
result = (char *)malloc(sizeof(char) * (i - 1));

if (result == NULL)
return (NULL);

for (j = 0; j <= i; j++)
result[j] = str[j];

return (result);
}
