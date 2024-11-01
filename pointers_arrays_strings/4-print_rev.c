#include "main.h"
/**
 * print_rev - prints a string in reverse.
 * @s: string input.
 * Return: Always 0.
 */
void print_rev(char *s)
{
int count = 0;
while (count >= 0)
{
if (s[count] == '\0')
{
_putchar('\n');
break;
}
_putchar(s[count]);
count--;
}
}
