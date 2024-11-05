#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char.
 * @s: source of address.
 * @to: target address.
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
*s = to;
}
int main(void)
{
char *s0 = "Hello";
char *s1 = NULL;
set_string(&s1, s0);
printf("%s\n", s1);
return (0);
}
}
