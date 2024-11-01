#include "main.h"
/**
 * _strlen - return the length of a string.
 * @s: string input.
 * Return: length of string.
 */
int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
count++;
return (count);
}
