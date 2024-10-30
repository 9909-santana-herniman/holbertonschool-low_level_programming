#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: size of the triangle by lines.
 * Return: Always 0.
 */
void print_triangle(int size)
{
int a, b;
for (a = 0; a < size; a++)
{
for (b = 1; b < (size - a); b++)
_putchar(' ');
for (b--; b < size; b++)
_putchar(35);
if (a < (size - 1))
_putchar('\n');
}
_putchar('\n');
}
