#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores a collection of variables for a dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @ownder: Owner of the dog.
 */

stuct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * dog_t - Typedef for struct dog
 */

tyepdef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
