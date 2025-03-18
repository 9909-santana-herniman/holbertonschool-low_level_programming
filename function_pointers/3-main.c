#include "3-calc.h"

/**
 * main - 
 * @argc: 
 * @argv:
 * Return:
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

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
}
