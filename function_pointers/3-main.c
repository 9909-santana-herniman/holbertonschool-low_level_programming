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
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Erro\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operator(num1, num2));
	return (0);
}
