#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: destination of stored copied data.
 * @src: source of data to be copied.
 * @n: number of bytes to fill.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
