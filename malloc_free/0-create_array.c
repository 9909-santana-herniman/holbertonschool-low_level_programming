#include <stdlib.h>
/**
 * create_array - creating an array of chars.
 * @size: size of array.
 * @c: initializes it with a specific char.
 * Return: pointer of the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = malloc(sizeof(char) * size);

if (size == 0 || array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
  
