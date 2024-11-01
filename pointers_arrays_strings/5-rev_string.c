#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string input
 * Return: Always 0.
 */
void rev_string(char *s)
{
int len = 0;
char *start, *end;
while (*(s + len) != '\0')
{
len++;
}
start = s;
end = s + len - 1;
while (start < end)
{
char temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
