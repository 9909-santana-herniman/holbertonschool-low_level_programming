#include "main.h"
#include <stdio.h>
/**
 * main - multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", number1(argv[1] * number2(argv[2]));
return (0);
}
