#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum value in the range.
 * @max: maximum value in the range.
 * Return: pointer to the newly created array, otherwise return NULL
 */

int *array_range(int min, int max)
{
int *arr;
int i;

if (min > max)
return (NULL);

arr = malloc(sizeof(*arr) * ((max - min) + 1));
if (arr == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
arr[i] = min;

return (arr);
}
