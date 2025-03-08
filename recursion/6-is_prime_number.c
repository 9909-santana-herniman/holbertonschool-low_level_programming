#include "main.h"

/**
 * is_prime_helper - Helper function that checks if a number is a
 * prime number.
 * @n: Input number.
 * @x: Current number to check.
 * Return: 1 if n is a prime number, 0 if not.
 */

int is_prime_helper(int n, int x)
{
	/* If c exceeds the square root of n, n is prime */
	if (x * x > n)
	{
		return (1);
	}
	/* If n is divisible by x, in it not prime */
	if (n % x == 0)
	{
		return (0);
	}
	/* Continue checking for dividability */
	return (is_prime_helper(n, x + 1));
}

/**
 * is_prime_number - checks if an input number is a prime number
 * @n: Input number.
 * Return: If prime number found then 1, 0 if n is not a prime number.
 */

int is_prime_number(int n)
{
	/* 0, 1, and negative numbers, are not prime numbers */
	if (n <= 1)
	{
		return (0);
	}
	/* Start check with number 2 */
	return (is_prime_helper(n, 2));
}
