#include "variadic_functions.h"
/**
 * print_all - Prints any type of argument based on the specified format.
 * @format: A list of types of arguments passed to the function.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str, *sep = "";
va_start(args, format);
while (format && format[i])
{
if (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's')
{
printf("%s", sep), sep = ", ";
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
printf("%s", str ? str : "(nil)");
break;
}
}
i++;
}
printf("\n");
va_end(args);
}
