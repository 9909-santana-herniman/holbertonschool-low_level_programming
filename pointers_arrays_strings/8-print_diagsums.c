#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum
 * of the two diagonals of a square matrix of integers.
 * @a: Pointer to int array (stored in 1D array).
 * @size: Size of matrix (no. of rows/ columns).
 * Return: Void.
 */

void print_diagsums(int *a, int size)
{
	int i; /* Loop counter */
	int sum1 = 0; /* Store sum of the first diagonal */
	int sum2 = 0; /* Store sum of the second diagonal */

	/* Iterate through each row of the matrix */
	for (i = 0; i < size; i++)
	{
	/* First diagonal element (row index == col index */
		sum1 = sum1 + (a[i * size + i]);
	/* Second diagonal element (col index = size - 1 - row index) */
		sum2 = sum2 + (a[i * size + (size - 1 - i)]);
	}
	printf("%d, %d\n", sum1, sum2); /* Print the sum of both diagonals */
}
