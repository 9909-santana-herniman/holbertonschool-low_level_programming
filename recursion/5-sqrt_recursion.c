#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number.
 * Return: square root of number.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
return (n * _sqrt_recursion(n - 1));
}
