#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: string input.
 * @needle: substring.
 * Return: pointer to the beginning of the located substring,
 * otherwise NULL if substring not found.
 */

char *_strstr(char *haystack, char *needle)
{
char *aHaystack;
char *aNeedle;
while (*haystack != '\0')
{
aHaystack = haystack;
aNeedle = needle;
while (*haystack != '\0' && *aNeedle != '\0' && *haystack == *aNeedle)
{
haystack++;
aNeedle++;
}
if (!*aNeedle)
return (aHaystack);
haystack = aHaystack + 1;
}
return (0);
}
