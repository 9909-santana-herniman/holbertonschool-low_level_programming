#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: pointer to the start of the array.
 * @size: number of elements in array.
 * @action: pointer to the function.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)
for (i = 0; i < size; i++)
action(array[i]);
}
