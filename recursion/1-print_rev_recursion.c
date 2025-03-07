#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse.
 * @s: Pointer to string.
 * Return: Void.
 */

void _print_rev_recursion(char *s)
{
	/* Stop recursive call, once '\0' reached */
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1); /* Move through each character */
		_putchar(*s); /* Print current character */
	}
}
