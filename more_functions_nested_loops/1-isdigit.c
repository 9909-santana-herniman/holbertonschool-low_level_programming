#include "main.h"
/**
 * _isdigit - checks for a digit (0 through9).
 * @c: character being checked.
 * Return: 1 if c is a digit, otherwise 0.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
