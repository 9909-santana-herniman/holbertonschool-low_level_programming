#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: input string
 * @c: character to be found
 * Return: NULL if character not found, otherwise s.
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
