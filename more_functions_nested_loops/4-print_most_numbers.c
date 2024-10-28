#include "main.h"
/**
 * print_most_numbers - another version to print numbers.
 *
 * Return: Always 0 (Success).
 */

void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i != 2 && i !=4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
