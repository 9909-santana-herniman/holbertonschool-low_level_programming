#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: value of bytes.
 * Return: pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
char *ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
