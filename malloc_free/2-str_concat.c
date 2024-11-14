#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenate two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: NULL on failure, otherwise pointer to new memory space.
 */

char *str_concat(char *s1, char *s2)
{
char result;
unsigned int i, j, length;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;

length = i + j;
result = malloc(sizeof(char) * (length + 1));

if (result == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
result[i] = s1[i];

for (j = 0; s2[j] != '\0'; j++)
result[i + j] = s2[j];

result[i + j] = '\0';

return (result);
}
