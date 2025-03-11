#include "main.h"
#include <stdio.h>

/**
 * main - Print all arguments it receives.
 * @argc: Argument count.
 * @argv: Argment vector.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count; /* Index variable */

	/* Loop through each argument starting from 0 */
	for (count = 0; count < argc; count++)
	{
		/* Print each argument, followed by a new line */
		printf("%s\n", argv[count]);
	}
	return (0);
}
