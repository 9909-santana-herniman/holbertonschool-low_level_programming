#include <stdio.h>
/**
 * main - Use ASCII to print single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
