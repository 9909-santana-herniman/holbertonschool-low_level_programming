#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: input integer one.
 * @b: input integer two.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
