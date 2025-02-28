#include "main.h"
#include <stdio.h>

/**
 * puts_half - A function that prints half of a string,
 * followed by a new line.
 * @str: Pointer to a string
 * Return: Void
 */

void puts_half(char *str)
{
	int index = 0; /* Index variable */
	int length; /* Variable to store length */
	int half_index;

	while (str[index] != '\0') /* Find length of string */
	{
		index = index + 1;
	}
	length = index; /* Store the final value of 'i' in length */

	if (length % 2 == 0) /* If length is even */
	{
		half_index = length / 2;
	}
	else /* If length is odd */
	{
		half_index = (length + 1) / 2;
	}
	
	index = half_index; /* Start at the halfway index */
	while (str[index] != '\0') /* Loop through from the half point */
	{
		_putchar(str[index]); /* Print each character */
	       index = index + 1; /* Move to the next character */	
	}
	_putchar('\n'); /* Followed by new line */
}
