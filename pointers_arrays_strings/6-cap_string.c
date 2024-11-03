#include "main.h"
/**
 * cap_string - capitalises all words of a string.
 * @s: string input.
 * Return: the pointer to dest.
 */
char *cap_string(char *s)
{
int count = 0, i;
int sow[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
if (*(s + count) >= 97 && *(s + count) <= 122)
*(s + count) = *(s + count) - 32;
count++;
while (*(s + count) != '\0')
{
for (i = 0; i < 13; i++)
{
if (*(s + count) == sow[i])
{
if ((*(s + (count + 1)) >= 97) && ( *(s + (count + 1)) <= 122))
*(s + (count + 1)) = *(s + count + 1)) - 32;
break;
}
}
count++;
}
return (s);
}
