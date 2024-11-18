#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array to search.
 * @size: number of elements in the array.
 * @cmp: pointer to a comparison function.
 *
 * Return: index of the first element for which the cmp
 * function returns a non-zero value,
 * return -1 if no elements matches, if size <= 0,
 * if the array or cmp is NULL.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
if (cmp(array[i]))
return (i);
}

return (-1);
}
