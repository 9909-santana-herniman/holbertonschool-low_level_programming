#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The input number.
 * Return: No value.
 */
void print_to_98(int n)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
while (n < 98)
{
printf("%d, ", n);
n++;
}
printf("%d\n", n);
}
