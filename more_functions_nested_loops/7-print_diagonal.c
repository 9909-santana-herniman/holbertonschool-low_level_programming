#include "main.h"
/**
 * print_diagonal - Draws a diagonal line.
 * @n: The number of times \ should be printed.
 * Return: Always 0 (Success).
 */
void print_diagonal(int n)
{
int a = 0, b = 0;
while (a < n)
{
while (b < a)
{
_putchar(' ');
b++;
}
_putchar(92);
if (a < n)
{
_putchar('\n');
}
a++;
}
_putchar('\n');
}
