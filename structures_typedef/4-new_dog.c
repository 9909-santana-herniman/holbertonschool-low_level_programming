#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - Calculate the length of a string.
 * @s: The string to measure
 * Return: The length of a string
 */

int str_len(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * str_copy - Copies a string from src to dest.
 * @dest: Destination buffer.
 * @src: Source string.
 * Return: Pointer to dest.
 */

char *str_copy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - A function that creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the owner.
 * Return: If failure return  NULL, otherwise struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Declare a pointer to struct dog */
	dog_t *dog_ptr;

	/* Allocate memory for the new dog structure */
	dog_ptr = malloc(sizeof(*dog_ptr));
	if (dog_ptr == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for name  */
	dog_ptr->name = malloc(str_len(name) + 1);
	if (dog_ptr->name  == NULL)
	{
		free(dog_ptr->name);
		return (NULL);
	}
	/* Allocate memory for owner */
	dog_ptr->owner = malloc(str_len(owner) + 1);
	if (dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr);
		return (NULL);
	}
	/* Copy name and owner manually */
	str_copy(dog_ptr->name, name);
	str_copy(dog_ptr->owner, owner);

	/* Assign dog age */
	dog_ptr->age = age;

	return (dog_ptr);
}
