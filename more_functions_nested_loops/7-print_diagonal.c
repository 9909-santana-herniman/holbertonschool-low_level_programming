#include "main.h"
/**
 * print_diagonal - Draws a diagonal line.
 * @n: The number of times \ should be printed.
 * Return: Always 0 (Success).
 */
void print_diagonal(int n)
{
int a, b;
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar(92);
if (a < (n - 1))
_putchar('\n');
}
_putchar('\n');
}
