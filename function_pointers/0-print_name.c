#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - A function that prints a name.
 * @name: Name to be printed.
 * @f: A function pointer.
 *
 * Description: This function takes a name and a funciton pointer 'f', which
 * is expected to be a fucntion that prints the name in a particular format,
 * (eg; as is or in uppercase.) If either 'name' or 'f' is NULL, the
 * function does nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	/* Check if either name or function pointer is NULL to prevent errors */
	if (name == NULL  && f == NULL)
	{
		return; /* Exit the function without doing anything */
	}
	/* Call the function 'f' with 'name' as its argument */
	f(name);
}
