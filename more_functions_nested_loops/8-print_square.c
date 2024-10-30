#include "main.h"
/**
 * print_square - prints a square.
 * @size: To check the size of the square.
 * Return: Always 0 (Success).
 */
void print_square(int size)
{
int a = 0, b = 0;
while (a < size)
{
while (b < size)
{
_putchar(35);
b++;
}
_putchar('\n');
a++;
b = 0;
}
}
