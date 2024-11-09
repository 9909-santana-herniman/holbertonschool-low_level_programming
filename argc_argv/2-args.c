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
printf("This program was called with \"%s\".\n", argc[0];
if (argc > 1)
{
for (count = 1; count < argc; count++)
printf("argv[%d] = %s\n", count, argc[count]);
}
else
{
printf("The command had no other arguments.\n");
}
return (0);
}
