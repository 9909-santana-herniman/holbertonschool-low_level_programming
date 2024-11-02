#include "main.h"
/**
 * puts2 - print every other character of a string, start with the first.
 * @str: string input
 * Return: Always 0
 */
void puts2(char *str)
{
while (*str)
{
_putchar(*str);
str += 2;
}
_putchar('\n');
}
