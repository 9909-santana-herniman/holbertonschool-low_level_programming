#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number.
 * Return: square root of number.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return -1;
}
int i = 1;
while (i * i <= n)
{
i++;
}
return i - 1;
}
