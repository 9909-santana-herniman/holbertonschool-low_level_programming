#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers.
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
int number1 = atoi(argv[1]);
int number2 = atoi(argv[2]);
if (number1 > 0)
{
printf("%d\n", number1);
}
if (number2 > 0)
{
printf("#d\n", number2);
}
return (0);
}
