#include "main.h"

/**
 * print_chessboard - A function that prints a chessboard.
 * @a: Pointer to char array.
 * Return: Void.
 */

void print_chessboard(char (*a)[8])
{
	int i = 0; /* Row variable */
	int j; /* Column variable */

	/* Loop through rows */
	while (i < 8)
	{
		j = 0; /* Initialise and reset columns */

		while (j < 8) /* Loop through columns */
		{
			_putchar(a[i][j]); /* Print current character */
			j++; /* Move to next column */
		}
		_putchar('\n'); /* Add new line after inner loop executed */
		i++; /* Move to next row */
	}
}
