#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s: input string.
 * @c: character to be found.
 * Return: pointer to the first occurence of the character. Otherwise NULL.
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
