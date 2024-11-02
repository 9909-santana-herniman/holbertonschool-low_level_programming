#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: string input.
 * Return: an integer.
 */
int _atoi(char *s)
{
int sign = 1, result = 0;
while (*s == ' ')
{
s++;
}
if (*s == '-')
{
sign = -1;
s++;
}
while (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
s++;
}
return (result *sign);
}
