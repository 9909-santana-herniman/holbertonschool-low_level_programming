#include "main.h"
/**
 * more_numbers - Print the numbers from 0 to 14, 10 times.
 *
 * Return: Always 0 (Success).
 */

void more_numbers(void)
{
int a = 0, b = 0;
while (a < 10)
{
while (b < 15)
{
if (b >=10)
{
_putchar((b /10) + 48);
}
_putchar((b % 10) + 48);
b++;
}
b = 0;
a++;
_putchar('\n');
}
}
