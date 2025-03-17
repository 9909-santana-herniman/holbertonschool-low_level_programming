#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A function that initialize a variable of type struct dog.
 * @d: Pointer to struct dog to initialize.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check if the pointer to struct dog is NULL */
	if (d == NULL)
	{
		return;
	}
	/* Assign values to correct fields in the struct */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
