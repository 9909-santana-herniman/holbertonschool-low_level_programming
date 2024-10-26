#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be checked
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
int ld;
ld = n % 10;
if (ld < 0)
{
_putchar(-ld + 48);
return (-ld);
}
else
{
_putchar(ld + 48);
return (ld);
}
}
