#include "main.h"
/**
 * print_square - prints a square.
 * @size: To check the size of the square.
 * Return: Always 0 (Success).
 */
void print_square(int size)
{
int a, b;
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar(35);
}
if (a != size - 1)
_putchar('\n');
}
_putchar('\n');
}
