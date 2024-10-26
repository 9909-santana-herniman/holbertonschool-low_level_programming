#include "main.h"
/**
 * times_table - Print the 9 times table
 * Return: no value
 */
void times_table(void)
{
int a = 0, b = 0, result;
while (a <= 9)
{
while (b <= 9)
{
result = a * b;
if (b != 0)
{
_putchar(',');
_putchar(' ');
}
if (result < 10)
{
_putchar(' ');
}
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
b++;
}
b = 0;
a++;
_putchar('\n');
}
}
