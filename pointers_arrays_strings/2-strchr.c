#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: input string.
 * @c: character to be found.
 * Return: pointer to the first occurence of the character. Otherwise NULL.
 */

char *_strchr(char *s, char c)
{
unsigned int i = 0;

for (; *(s + i) != '\0'; i++)
if (*(s + i) == c)
return (s + i);
if (*(s + i) == c)
return (s + i);
return ('\0');
}
