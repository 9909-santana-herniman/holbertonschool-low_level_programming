#include <main.h>
/*
 * main - print _putchar as an output
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
int str[] = {95, 112, 117, 116, 99, 104, 97, 114}
int count = 0;
int sz = sizeof(str) / sizeof(int);

while (count < sz)
{
_putchar(str[count]);
count++;
}			   
_putchar('\n');

return (0);
}
