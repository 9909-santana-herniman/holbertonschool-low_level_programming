#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - A function that prints a struct dog.
 * @d: Pointer to struct dog.
 *
 * Description: This function prints the name, age, and owner or a dog.
 * If an element (name or owner) is NULL, it prints "(nil)" instead.
 * If the pointer to the struct is NULL, the function does nothing.
 */

void print_dog(struct dog *d)
{
	/* Check if the struct itself is NULL to prevent segmentation faults */
	if (d == NULL)
	{
		return;
	}
	/* Check if the dog's name is NULL */
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	/* Print the age, no need to check for NULL as it's a float */
	printf("Age: %f\n", d->age);

	/* Check if the dog's owner is NULL */
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
