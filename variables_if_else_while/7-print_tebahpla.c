#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse using ASCII
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 122; i < 96; i--)
{
putchar(alphabet[i]);
}
putchar('\n');
return (0);
}

