#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - A function that prints a chessboard.
 * @a: Pointer to char array.
 * Return: Void.
 */

void print_chessboard(char (*a)[8])
{
	/* Initialise row and column loop variables */
	int i;
	int j;

	/* Outer loop for rows */
	for (i = 0; i <= 7; i++)
	{
		/* Inner loop for columns */
		for (j = 0; j <= 7; j++)
		{
			/* Print characters */
			printf("%c ", a[i][j]);
		}
		printf("\n"); /* New line after inner loop */
	}
}
