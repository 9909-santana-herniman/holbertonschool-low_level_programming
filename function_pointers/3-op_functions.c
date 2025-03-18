#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Add summ of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two integers.
 * @a: First integer.
 * @b: Second intger.
 * Return: Multiplication of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Division of a by b.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b;
}

/**
 * op_mod - Calculate the modulo of two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Remainder of the division of a and b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
