#include "main.h"
#include <ctype.h>
/**
 * _isupper - Used to check for uppercase character.
 * @c: The character to be checked.
 * Return: Return 1 if c is uppercase, otherwise 0).
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
