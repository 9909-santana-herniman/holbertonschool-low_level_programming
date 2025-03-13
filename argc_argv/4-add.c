#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers.
 * @argc: Arguments count.
 * @argv: Arguments vector.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0; /* Store sum of numbers */
	int i; /* Loop index for iterating through arguments */
	int j; /* Loop index for interating through char's of each argument */

	/* If no numbers are provided, print "0" and exit */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Loop through each argument */
	for (i = 1; i < argc; i++)
	{
		/* Loop through each character of the argument */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		/* Check if each character is NOT a digit */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	/* Convert argument string to integer and add to sum */
	sum = sum + atoi(argv[i]);

	}
	/* Print the final sum of positive numbers */
	printf("%d\n", sum);
	return (0);
}
