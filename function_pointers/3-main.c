#include "3-calc.h"

/**
 * main - Performs a simple operation.
 * @argc: Argument count.
 * @argv: Argument vector (array of arguments).
 * Return: 0 on success, otherwise exits with an error code.
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	/* Function pointer to hold the correct operation fucntion */
	int (*operator)(int, int);

	/* Check if number of arguments is correct */
	/* (should be 4: program name + 3 inputs) */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* Ensure operator is a single character */
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	/* Get correct funciton for the operator */
	operator = get_op_func(argv[2]);

	/* If no match, exit with an error */
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* Convert the number arguments from strings to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* Perform the operation and print the result */
	printf("%d\n", operator(num1, num2));
	return (0);
}
