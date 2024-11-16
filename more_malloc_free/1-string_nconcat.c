#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes from s2 to concatenate to s1.
 * Return: pointer to the allocated memory, otherwise return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int ls1, ls2, lresult, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (ls1 = 0; s1[ls1] != '\0'; ls1++)
;
for (ls2 = 0; s2[ls2] != '\0'; ls2++)
;

if (n > ls2)
n = ls2;

lresult = ls1 + n;

result = malloc(lresult + 1);
if (result == NULL)
return (NULL);

for (i = 0; i < ls1; i++)
result[i] = s1[i];

for (; i < lresult; i++)
result[i] = s2[i - ls1];

result[i] = '\0';

return (result);
}
