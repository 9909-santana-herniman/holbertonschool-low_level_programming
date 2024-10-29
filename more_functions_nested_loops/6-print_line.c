#include "main.h"
/**
 * print_line - Draws a straight line in the terminal.
 * @n: number of times the line is printed.
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
int i = 0;
while (i < n)
{
_putchar(95);
i++;
}
_putchar('\n');
}
