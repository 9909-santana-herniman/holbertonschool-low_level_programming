#include "main.h"
/**
 * puts2 - print every other character of a string, start with the first.
 * @str: string input
 * Return: Always 0
 */
void puts2(char *str)
{
int count = 0;
while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
}
if (count % 2 == 0)
_putchar(str[count]);
count++;
}
}
