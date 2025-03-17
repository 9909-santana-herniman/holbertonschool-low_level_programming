#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free() dogs.
 * @d: Pointer to struct dog.
 * Return: Always 0 (success).
 */

void free_dog(dog_t *d)
{
	/* Check if d is NULL. If true, do nothing */
	if (d == NULL)
	{
		return;
	}

	free(d->name); /* Free memory allocated for the dog's name */
	free(d->owner); /* Free memory allocated for the dog's owner */
	free(d); /* Free the memory for the dog struct itself */
}
