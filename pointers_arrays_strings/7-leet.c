#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: string input.
 * Return: the pointer to s.
 */
char *leet(char *s)
{
int count = 0, i;
int lowercase_letters[] = {97, 101, 111, 116, 108};
int uppercase_letters[] = {65, 69, 79, 84, 76};
int numbers[] = {52, 51, 48, 55, 49};
while (*(s + count) != '\0')
{
for (i = 0; i < 5; i++)
{
if (*(s + count) == low_letters[i] || *(s + count) == upp_letters[i])
{
*(s + count) = numbers[i];
break;
}
}
count++;
}
return (s);
}
