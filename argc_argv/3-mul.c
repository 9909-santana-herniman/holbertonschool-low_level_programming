#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/* Check number of arguments is not equal to 3 */
	/* (program name + 2 numbers */
	if (argc != 3)
	{
		printf("Error\n"); /* If incorrect, print error */
		return (1);
	}

	/* Convert strings to integers using atoi function */
	/* Multiply and print result */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
