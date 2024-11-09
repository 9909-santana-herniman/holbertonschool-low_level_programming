#include "main.h"
#include <stdio.h>
/**
 * main - print all arguments it receives.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[1])
{
int count;
for (count = 0; count < argc; count++)
printf("%s\n", argc[count]);
return (0);
}
