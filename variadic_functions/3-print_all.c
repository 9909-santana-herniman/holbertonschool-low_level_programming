#include "variadic_functions.h"

/**
 * print_all - Prints any type of argument based on the specified format.
 * @format: A list of types of arguments passed to the function.
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
va_list valist;
unsigned int i = 0, c = 0;
char *str;

va_start(valist, format);
while (format && format[i])
{
if (c)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(valist, int)), c = 1;
break;
case 'i':
printf("%d", va_arg(valist, int)), c = 1;
break;
case 'f':
printf("%f", va_arg(valist, double)), c = 1;
break;
case 's':
str = va_arg(valist, char *);
printf("%s", str ? str : "(nil)"), c = 1;
break;
}
i++;
}
printf("\n"), va_end(valist);
}
